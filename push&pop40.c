// #include <stdio.h>

// #include <stdlib.h>

// #define SIZE 4

// int top = -1, array[SIZE];
// void push();
// void pop();
// void show();

// void push()
// {
//     int x;

//     if (top == SIZE - 1)
//     {
//         printf("\nOverflow!!");
//     }
//     else
//     {
//         printf("\nEnter the element to be added onto the stack: ");
//         scanf("%d", &x);
//         printf("%d is stored in stack\n",x);
//         top = top + 1;
//         array[top] = x;
//     }
// }

// void pop()
// {
//     if (top == -1)
//     {
//         printf("\nUnderflow!!");
//     }
//     else
//     {
//         printf("\nPopped element: %d", array[top]);
//         top = top - 1;
//     }
// }



// int main()
// {
//     int choice;

//     while (3)
//     {
//         printf("\nPerform operations on the stack:");
//         printf("\n1.Push the element\n2.Pop the element\n");
//         printf("\n\nEnter the choice: ");
//         scanf("%d", &choice);

//         switch (choice)
//         {
//         case 1:
//             push();
//             break;
//         case 2:
//             pop();
//             break;
       
       
        
//         default:
//             printf("\nInvalid choice!!");
//         }
//     }
// }


#include<stdio.h>
#include<stdlib.h>
#define SIZE 4
int top,push ;

void push(){
if (top==-1)
{
  printf("overflow\n");
}
else
{
  push=10;
  top+1;
}


}