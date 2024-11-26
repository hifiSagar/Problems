#include<stdlib.h>
#include<stdio.h>
struct node{
    int data;
    struct node*link;
};

int main(){
struct node*head= (struct node*)malloc(sizeof(struct node));
    head->data=45;
    head->link=NULL;
struct node*current= (struct node*)malloc(sizeof(struct node));
    current ->data=98;
    current-> link=NULL;
    head->link =current;
struct node* current1 = (struct node*)malloc(sizeof(struct node));
    current1 -> data=3;
    current->link =NULL;
    head->link->link = current1;
printf("%d->%d->%d",head->data,current->data,current1->data);
    return 0;
}N