//Task Scheduling: Write a program that simulates a round-robin or priority-based task scheduler for embedded tasks.
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

struct Task_struct{
    int taskid;
    int timeremaining;
    int priority;
}Task;

void round_robin_algo(struct Task_struct * tasks,int n,int timequantum){
    int task_index;
    int tasks_remaining = n;
    task_index = 0;
    printf("Round Robin Started");
    
    while(tasks_remaining>0)
    {
        if(tasks[task_index].timeremaining >= timequantum)
        {   
        printf("Debug");

            printf("Executing task ID : %d \n",tasks[task_index].taskid);
            tasks[task_index].timeremaining-=timequantum;
            printf("Remaining Time : %d \n",tasks[task_index].timeremaining);
            task_index = (task_index + 1)%n;
            //sleep(timequantum);
        }
        else if(tasks[task_index].timeremaining < timequantum && tasks[task_index].timeremaining >0){
            printf("Executing task ID : %d \n",tasks[task_index].taskid);
            tasks[task_index].timeremaining=0;
            printf("Remaining Time : %d \n",tasks[task_index].timeremaining);
            task_index = (task_index + 1)%n;
            //sleep(tasks[task_index].timeremaining);
            tasks_remaining--;
        }
        else{
            printf("This task is over Task ID: %d \n",tasks[task_index].taskid);
            task_index = (task_index + 1)%n;
        }

        
    }
}

int main(){

    struct Task_struct tasks[5]={
        {100,54,1},
        {101,34,4},
        {102,45,2},
        {103,67,3},
        {104,57,0}
    };

    int n=5;
    int timequantum;
    printf("Enter time quantum");
    scanf("%d",&timequantum);
    round_robin_algo(tasks,n,timequantum);
    return 0;
}