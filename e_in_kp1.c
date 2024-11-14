#include<stdio.h>
#include<string.h>
int main(){
int age = 20;
const float bb = 10.0;
char*village;

printf("Enter your village:  ");
scanf("%s", & village);

printf("what is your age %d  and what is your bank balance %f & which is your village %c ", age, bb, village);
 return 0;

}