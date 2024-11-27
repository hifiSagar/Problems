#include<stdlib.h>
#include<stdio.h>
#include<string.h>

void main(){

char *p;
p= malloc(sizeof(char));
if(p==NULL)
{
    printf("couldn't able to allocate memory\n");

}
else
{
    strcpy(p,"Nagendra");

}
printf("%s",p);
free(p);
}