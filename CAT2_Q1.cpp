//A program to display employees details
//Author:Peter Paul Munyaka
//Reg NO:CT101/G/24684/24
//DATE:7/11/2024
#include <stdio.h>
typedef struct {
    char name[25];
    int id;
    char department[20];
    float salary;
    char email[50];
}employee;

int main() {
    employee employee = {"John Doe", 12345, "Human Resources", 55000.50, "john.doe@company.com"};

    //employee's information
    printf("the employees name is :%s\n", employee.name);
    printf("the employees ID: %d\n", employee.id);
    printf("the employees Department: %s\n", employee.department);
    printf("the employees Salary: %.2f\n", employee.salary);
    printf("the employees Email: %s\n", employee.email);

    return 0;
}