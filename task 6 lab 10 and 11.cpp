#include<stdio.h>
#include<string.h>
struct salary{
  	float basicpay;
  	float bonuse;
  	float deduction;
  };
 struct employee{
 	int ID;
 	char name[50];
 	struct salary sal;
 };

  float calculateNetsalary(struct employee emp){
  	return emp.sal.basicpay+emp.sal.bonuse-emp.sal.deduction;
 }
 
 void displayemployeesal(struct employee emp){
 	float net=calculateNetsalary(emp);  
 	printf("---------details of employee---------\n");
 	printf("the employee ID is %d\n ",emp.ID);
 	printf("the employee NAME is %s\n ",emp.name);
 	printf("the employee BASICPAY is %f\n ",emp.sal.basicpay);
 	printf("the employee BONUSE is %f\n ",emp.sal.bonuse);
 	printf("the employee DEDUCTION is %f\n ",emp.sal.deduction);
 	    printf("Net Salary: %.2f\n", net);
 
 }

int main() {
    struct employee emp;

    printf("Enter Employee ID: ");
    scanf("%d", &emp.ID);
    getchar();

    printf("Enter Employee Name: ");
    fgets(emp.name, sizeof(emp.name), stdin);
    emp.name[strcspn(emp.name, "\n")] = '\0';

    printf("Enter Basic Pay: ");
    scanf("%f", &emp.sal.basicpay);

    printf("Enter Bonus: ");
    scanf("%f", &emp.sal.bonuse);

    printf("Enter Deductions: ");
    scanf("%f", &emp.sal.deduction);
    displayemployeesal(emp);
    
 }

