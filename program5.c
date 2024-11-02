#include <stdio.h>
#include<stdlib.h>
#define size 10
int top = -1;
int stack[size];
void push(int item)
{
if(top == size-1)
printf("\nStack is Full or Stack Overflow. Push operationis not allowed\n");
else
{
top++;
stack[top] = item;
printf("\nElement is pushed\n");
}
}
void pop()
{
int item;
if (top == -1)
printf("\nStack is Empty. Pop operation is notallowed\n");
else
{
item = stack[top];
top--;
printf("\n%d is popped from stack\n",item);
}
}
void display()
{
printf("\nCurrent status of stack is:\n");
for(int i=0; i<=top; i++)
{
printf("%d\t",stack[i]);
}
}
void isEmpty()
{
if (top == -1)
printf("\nStack is Empty\n");
}
void isFull()
{
if (top == size-1)
printf("\nStack is Full or Stack Overflow\n");
}
int peek()
{
int item;
item = stack[top];
return item;
}
void main()
{
int choice,item,item1;
while(1)
{
printf("\nEnter the operation to be performed\n");
printf("1. PUSH\n2. POP\n3. Status of Stack\n4.IsEmpty\n5. IsFull\n6. Peek\n7. Exit\n");
scanf("%d",&choice);
switch(choice)
{
case 1: printf("Enter an element to push\n");
scanf("%d",&item);
push(item);
break;
case 2: pop();
break;
case 3: display();
break;
case 4: isEmpty();
break;
case 5: isFull();
break;
case 6: item1 = peek();
printf("\nTop most element of stack is %d\n",item1);
break;
case 7: exit(0);
break;
default: printf("\nWrong choice\n");
}
}
}