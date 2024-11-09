
// // STRUCTURE PROGRAM

// /*INPUT PROGRAM*/
#include<stdio.h>

struct Employee{
char name[10];                  /*Assigning for input*/
int emp_id;
float salary;
};

    void main(){
    struct Employee e1;      /*Assigning for location*/ 
    struct Employee e2;
    printf("Enter Employee Name: ");
    scanf("%s",e1.name);
    printf("Enter Employee ID: ");
     scanf("%d",&e1.emp_id);  
      printf("Enter Employee salary: ");     /*Taking input*/
      scanf("%f",&e1.salary);
      printf("THE DATA IS GIVEN BELLOW\n");
  printf("Employee name is:%s\n",e1.name);
  printf("Employee Id is:%d\n",e1.emp_id);
  printf("Employee salary is:%f\n",e1.salary);

}



// /*OUTPUT PROGRAM*/
// #include<stdio.h>
// #include<string.h>
// struct Employee{
// char name[10];                  /*Assigning for input*/
// int emp_id;
// float salary;
// };

//     void main(){
//     struct Employee e1;      /*Assigning for location*/
//     struct Employee e2;
   
//     strcpy (e1.name ,"sagar");
// e1.emp_id = 456789;
// e1.salary = 15000.32;

//   printf("Employee name is:%s\n",e1.name);
//   printf("Employee Id is:%d\n",e1.emp_id);
//   printf("Employee salary is:%f\n",e1.salary);
//     }
