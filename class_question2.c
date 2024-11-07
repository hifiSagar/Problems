#include<stdio.h>
#include<stdlib.h>
#include<string.h>

void main(){
char *p;
p = malloc(15*sizeof(int));
if (p==NULL)
{
    printf("Could't able to allocate memory\n");
}
else
{
    strcpy(p,"a");
}
printf("%s",p);
free(p);


}