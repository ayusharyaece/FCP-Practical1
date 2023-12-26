#include <stdio.h>


struct Employee {
    char name[50];
    int empID;
    float salary;
};

int main() {
    int numEmployees;

    printf("Enter the number of employees: ");
    scanf("%d", &numEmployees);

 
    struct Employee employees[numEmployees];

    for (int i = 0; i < numEmployees; ++i) {
        printf("\nEnter details for employee %d:\n", i + 1);
        printf("Name: ");
        scanf("%s", employees[i].name);
        printf("ID: ");
        scanf("%d", &employees[i].empID);
        printf("Salary: ");
        scanf("%f", &employees[i].salary);
    }

    
    printf("\nEmployee Database:\n");
    for (int i = 0; i < numEmployees; ++i) {
        printf("\nDetails for employee %d:\n", i + 1);
        printf("Name: %s\n", employees[i].name);
        printf("ID: %d\n", employees[i].empID);
        printf("Salary: %.2f\n", employees[i].salary);
    }

    return 0;
}
