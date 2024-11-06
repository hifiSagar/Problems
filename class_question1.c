#include<stdio.h>
#include<stdlib.h>
int main(){
void *ptr = malloc(20);
if (ptr==NULL)
{
    printf("Memory allocation failed\n");
}
printf("memory allocated at : %p\n",ptr);
void *new_ptr = realloc(ptr,40);
if(new_ptr == NULL){
    printf("Memory reallocation failed\n");
    free(ptr);
    return 1;
}
printf("Memory Relocated at : %p\n",new_ptr);
free(new_ptr);
    return 0;

}

