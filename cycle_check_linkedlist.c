#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

typedef struct node{
    int data;
    struct node* next;
    int flag;
}node;

void push(struct node** h_ref, int data){

    struct node* new_node=(node*)malloc(sizeof(node));
    new_node->data=data;
    new_node->flag=0;
    new_node->next=(*h_ref);
    (*h_ref)=new_node;
}

bool detectloop(struct node* h){

    while(h!=NULL){

        if(h->flag==1){
            return true;
        }

        h->flag=1;
        h=h->next;
    }
    return false;
}

int main(){
    struct node* head=NULL;

    push(&head, 2);
    push(&head, 4);
    push(&head, 6);
    push(&head, 8);

    head->next->next->next->next=head;

    if(detectloop(head)){
        printf("Loop found");
    }
    else{
        printf("Loop not found");
    }
    return 0;
}