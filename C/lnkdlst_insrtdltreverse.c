#include <stdio.h>
#include <stdlib.h>

struct Node{

    int data;
    struct Node * next;

};

struct Node * reverselinkedlist(struct Node * head){
    struct Node * left=NULL;
    struct Node * center=head;
    struct Node * right=NULL;
    while(center!=NULL){

        right = center->next;
        center->next = left;
        left = center;
        center = right;   
    }
    head = left;
    return head;
}

void printlinkedlist(struct Node * head){
    struct Node *temp = head ;
    while(temp!=NULL){
        printf("%d -",temp->data);
        temp = temp -> next;
    }
}

void insertnode(struct Node * head,int data){
    
    struct Node *temp = head ;
    while(temp->next!=NULL){
        temp = temp -> next;
    }
    struct Node *new_node = (struct Node *)malloc(sizeof(struct Node));
    new_node->data =  data;
    new_node->next = NULL;
    temp -> next = new_node;
    printf("inserted successfully");
}

struct Node * removenode(struct Node * head,int remove_node_data) // here with void method it is difficult to handle boundary case of just one element in list removing header. that time the main pointer will loose link. so better to use return.
{
    struct Node * temp = head;
    struct Node * prev = temp ;
    printf("Debug");
    while(temp!=NULL && temp->data != remove_node_data){
        prev = temp;
        temp = temp->next;
    }
    if(temp!=NULL && temp->data == remove_node_data){
        if(temp == head){
            if(head->next !=NULL){
                head = head->next;
                free(temp);
            }
            else{
                free(head);
                return NULL;
            }
        }
        prev->next = temp->next;
        temp->next = NULL ;
        free(temp);
    }

    return head;
}

int main(){
    struct Node *first_node = (struct Node *)malloc(sizeof(struct Node));
    first_node-> data = 0;
    first_node-> next = NULL;
    int inp_cmd;
    int enter_data;int remove_node_data=10;
    while(1){
        printf("Enter inp : 1 insert ,3 print, 2 remove, 4 reverse");
        scanf("%d",&inp_cmd);

        if(inp_cmd == 1){
            printf("enter insert data");
            scanf("%d",&enter_data);
            printf("Outside debug");
            insertnode(first_node,enter_data);
        }
        if(inp_cmd == 2){
            printf("enter insert data");
            scanf("%d",&remove_node_data);
            printf("Debug");
            first_node = removenode(first_node,remove_node_data);
        }
        if(inp_cmd==3){
            printlinkedlist(first_node);
        }
        if(inp_cmd==4){
            first_node = reverselinkedlist(first_node);
        }

    }

    return 0;
}