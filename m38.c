#include <stdio.h>

int main()
{
    float basic_salary, hra, da, net_salary;
    printf("Enter Basic Salary of the Employee: ");
    scanf("%f", &basic_salary);
    if (basic_salary<= 10000)
    {
        hra=basic_salary*0.20;  
        da=basic_salary*0.80;  
    }
    else if (basic_salary<=20000)
    {
        hra=basic_salary*0.25;
        da =basic_salary*0.90; 
    }
    else
    {
        hra=basic_salary*0.30; 
        da=basic_salary*0.95;  
    }
	net_salary=basic_salary+hra+da;
    printf("\n------ SALARY DETAILS ------\n");
    printf("Basic Salary : %.2f\n", basic_salary);
    printf("HRA          : %.2f\n", hra);
    printf("DA           : %.2f\n", da);
    printf("Gross Salary : %.2f\n", net_salary);
    printf("-----------------------------\n");

    return 0;
}

