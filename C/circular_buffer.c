//NOTE Designed Just to Understand Concepts. lot of open points are there in this .

// Online C compiler to run C program online
#include <stdio.h>
#include <math.h>
#include <stdlib.h>

struct Node{
    
    int data;
    struct Node * next;
};

void Adddata(struct Node * head_node){
    int inp_data;
    scanf("%d",&inp_data);
    
    struct Node * new_node = (struct Node *)malloc(sizeof(struct Node));
    new_node->data = inp_data;
    new_node->next = head_node->next;
    head_node->next = new_node;
    printf("Added %d",new_node->data);
}

void Removedata(struct Node * remove_node){
    struct Node * temp_node = (struct Node *)malloc(sizeof(struct Node));
    temp_node = remove_node;
    while(remove_node!=temp_node){
        temp_node = temp_node -> next;
    }
    temp_node->next = remove_node->next;
     printf("Removed %d",remove_node->data);
    free(remove_node);
}

int main() {
  //Circular Buffer: Design a circular buffer with operations to add and remove data, ensuring it wraps around the buffer boundaries.
 
  while(1){
  struct Node * head_node = (struct Node *)malloc(sizeof(struct Node));
  head_node->next = head_node;
  head_node->data = 20;
  Adddata(head_node);
  Removedata(head_node);
  }
  

   return 0;
}