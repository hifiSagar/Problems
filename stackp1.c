// STACK PROGRAM
#include<stdio.h>
#include<stdlib.h>
#define size 10
int top = -1;
int stack[size];
void push(int item)
{
if (top ==size-1)
	printf("\nstack is full or stack is overflow\n");
else
{
	top++;
	stack[top] =item;
	printf("Element is Pushed\n");
}
}
void pop()
{
int item;
if (top==-1)
	printf("satck is empty\n");
else
{
	  
	  item = stack[top];
	  top--;
	  printf("%d is popped from stack\n",item);
}
}

void display()
{
printf("\nCurrent status of stack is : %d");
for(int i=0;i<=top; i++)
{
	printf("%d\t", stack[i]);
	}
}

void isEmpty()
{
if (top==-1)
        printf("\nstack is empty\n");
}

void isFull()

{
if (top ==size-1)
	printf("\nstack is full or stack is overflow\n");
}

int peek()
{
	int item;
	item =stack[top];
return item;
}

void main()
{
int choice,item;
while(1)
{
printf("\nEnter the operation to be performed\n");
printf("1.PUSH\n2.POP\n3.STATUS OF STACK\n4.IsEmpty\n5.Isfull\n6.PEEK\n7.Exit\n");
scanf("%d",&choice);
switch(choice)
{
// case 1: printf("Enter an element to push\n");
// 	scanf("%d",&item);
item=10;
	push(item);
	break;
case 2: pop();
	break;
case 3 : display();
	break;
case 4 : isEmpty();
	break;
case 5: isFull();
	break;
case 6: item= peek();
	printf("\nTop most element of stack is %d\n",item);
	break;
case 7: exit(0);
	break ;
default : printf("Invaid Choice\n");
}
}
}