// STRUCTURE PROGRAM
#include<stdio.h>
struct Project{
    char name[20];
    int proj_id;
    float proj_cost;
};

struct Employee{
    char name[10];
    int emp_id;
    float salary;
    struct Project Project;
};
int main(){
    struct Employee e1;
    printf("Employee Details\n");
    scanf("%s",e1.name);
    scanf("%d",&e1.emp_id);
    scanf("%f",&e1.salary);

    printf("Employee Project Details\n");
    scanf("%s",e1.Project.name);
    scanf("%d",&e1.Project.proj_id);
    scanf("%f", &e1.Project.proj_cost);


     printf("Employee Details\n");
    printf("%s\n",e1.name);
    printf("%d\n",e1.emp_id);
    printf("%f\n",e1.salary);

    printf("Employee Project Details\n");
    printf("%s\n",e1.Project.name);
    printf("%d\n",e1.Project.proj_id);
    printf("%f\n",e1.Project.proj_cost);

    return 0;
}

