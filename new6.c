#include<stdlib.h>
#include<stdio.h>

void main(){
 int arr[50], size,i;
 printf("Enter the size of array\n");
 scanf("%d",&size);
 printf("Enter the data to store Array\n");
 for (int i = 0; i < size; i++)
 {
    scanf("%d",&arr[i]);
 }
 
for (int i = 0; i < size; i++)
 {
    printf("Arrays are  %d\n",arr[i]);
 }

}