//Queue program using Array

#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define N 5
int queue[5]
int f=-1;
int r=-1;
void enqueue()
{
	if(r==N-1)
	{
		printf("Over Flow");
	}
	else if(f==-1 && r==-1)
	{
		f=r=0;
		queue[r]=10;
		printf("%d the number is enqued\n");
	}
	else{
		r++;
		queue[r]=20
		printf("%d the number is enqued\n");
	    }
}

int main()
{
	void enqueue()

	return 0;
}