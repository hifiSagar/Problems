/*Read 5 character in array and print in reverse*/
#include<stdio.h> 
#include<string.h> 
int main() 
{ 
	char str[10][10];	//array of strings 
	int i,n; 
	printf("Enter the total number to strings to be included in the array : "); 
	scanf("%d",&n);		//n is the length of the array 
	printf("\nEnter the strings to be included in the array one by one : \n"); 
	for(i=0;i<n;i++) 
	{ 
		scanf("%s",&str[i]);		//getting strings as input 
	} 
	printf("\nReversed Strings :\n"); 
	for(i=0;i<n;i++) 
	{ 
		strrev(str[i]);		//function to reverse the strings 
		printf("%s\n",str[i]); 
	} 
	return 0; 
} 