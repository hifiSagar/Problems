#include<stdio.h>
void main(){
int num1,num2,choice/*,add,sub,mul,div*/;
printf("Enter a Two numbers\n");
scanf("%d%d",&num1,&num2);
printf("Enter A Option\n1.Addition\n2.Subtraction\n3.Multiplication\n4.Division\n");
scanf("%d",&choice);
/*add =num1+num2;
sub =num1-num2;
mul =num1*num2;
div =num1/num2;*/

if (choice == 1)
{
printf("Addition is : %d\n",num1+num2);
}
else if (choice == 2)
{
printf("Subtraction is : %d\n",num1-num2);
}
else if (choice == 3)
{
printf("Multiplication is : %d\n",num1*num2);
}
else if (choice == 4)
{
printf("Division is :%d\n",num1/num2);
}
else
{
    printf("Invalid Choice! Try with 1 to 4 numbers");
}


}
