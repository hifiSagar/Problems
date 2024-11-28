#include<stdio.h>
#include<stdlib.h>
# define N 5
int stack [N];
int top=-1;

void push(int item){
  if(top==N-1)
  {
      printf("Stack is Overflow\n");
       printf("\n");
  }
  else{
        
        top++;
        stack[top]=item;
        printf("The pushed Element is %d\n",stack[top]);
        printf("\n");
  }
}
  
 void pop(){
      int item;
     if(top==-1)
     {
         printf("Stack is Underflow\n");
          printf("\n");
     }
     else{
      
         item=stack[top];
           top--;
         printf("The Popped elements is %d\n",item);
         printf("\n");
     }
 }
 void display(){
     for(int i=0; i<=top;i++)
     {
         printf("Stack Elements Are %d \n",stack[i]);
     }
 }
 void isFull(){
     if(top==N-1){
         printf("stack is Full\n");
     }
 }
 void isEmpty(){
     if(top==-1){
         printf("Stack is Empty\n");
     }
     
 }
 int main(){
      int choice,item;
      while(1){
      printf("Enter the choice\n1.Push\n2.pop\n3.Display\n4.Is Full\n5.Is Empty\n");
      scanf("%d",&choice);
      switch(choice){
          case 1 : printf("Enter the data\n");
                    scanf("%d",&item);
                    push( item);
                break;
          case 2 : pop();
                break;
          case 3 : display();
                break;
          case 4 : isFull();
                break;
          case 5 : isEmpty();
                break;
          
          default : printf("invalid choice\n");
      }
      }
      
     return 0;
 }
    
