#include <stdio.h>
#include <stdlib.h>
#include <time.h>

typedef enum dept{HR, Sales, Research, Software, Executive} dept;
typedef struct employee{
    dept department;
    int annual_sal;
    unsigned int ssn;
} employee;

const char* dept_to_string(dept department) {
    switch(department) {
        case HR: return "HR";
        case Sales: return "Sales";
        case Research: return "Research";
        case Software: return "Software";
        case Executive: return "Executive";
        default: return "Unknown";
    }
}

int salary_gen(dept department)
{
    int base_salary;
    int offset = rand() % 10000;
    if(department == HR)
        base_salary = 100000;
    else if(department == Sales)
        base_salary = 30000;
    else if(department == Research)
        base_salary = 50000;
    else if(department == Software)
        base_salary = 60000;
    else
        base_salary = 80000; //for executive
    return base_salary + offset;
}

int main(void)
{
    srand(time(0)); // seed the random number generator
    struct employee emp[10];
    for(int i = 0; i < 10; i++)
    {
        emp[i].department = rand() % 5; // assign a random department
        emp[i].annual_sal = salary_gen(emp[i].department); // generate a random salary
        emp[i].ssn = rand() % 1000000000 + 100000000; // generate a random SSN

        printf("Department: %s\n", dept_to_string(emp[i].department));
        printf("Annual Salary: %d\n", emp[i].annual_sal);
        printf("SSN: %u\n", emp[i].ssn);
        printf("\n\n");
    }
}
