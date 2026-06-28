
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Employee {
    int id;
    char name[50];
    char designation[50];
    float salary;
};

void addEmployee() {
    struct Employee emp;
    FILE *fp = fopen("employee.txt", "a");
    if (fp == NULL) {
        printf("Error opening file!\n");
        return;
    }

    printf("\nEnter Employee ID: ");
    scanf("%d", &emp.id);
    printf("Enter Name: ");
    scanf(" %[^\n]s", emp.name);
    printf("Enter Designation: ");
    scanf(" %[^\n]s", emp.designation);
    printf("Enter Salary: ");
    scanf("%f", &emp.salary);
    fprintf(fp, "%d %s %s %.2f\n", emp.id, emp.name, emp.designation, emp.salary);
    fclose(fp);
    printf("Employee added successfully!\n");
}
void viewEmployees() {
    struct Employee emp;
    FILE *fp = fopen("employee.txt", "r");
    if (fp == NULL) {
        printf("No records found or file error!\n");
        return;
    }
    printf("\n Employee List \n");
    printf("%d %s %s %f\n", "ID", "Name", "Designation", "Salary");
    printf("-------------------------------------------------------------\n");
    while (fscanf(fp, "%d %s %s %f", &emp.id, emp.name, emp.designation, &emp.salary) != EOF) {
        printf("%d %s %s %f\n", emp.id, emp.name, emp.designation, emp.salary);
    }
    fclose(fp);
}

void searchEmployee() {
    int Id, found = 0;
    struct Employee emp;
    FILE *fp = fopen("employee.txt", "r");
    if (fp == NULL) {
        printf("File error!\n");
        return;
    }
    printf("\nEnter Employee ID to search: ");
    scanf("%d", &Id);

    while (fscanf(fp, "%d %s %s %f", &emp.id, emp.name, emp.designation, &emp.salary) != EOF) {
        if (emp.id == Id) {
            printf("\nEmployee Found:\n");
            printf("ID: %d\nName: %s\nDesignation: %s\nSalary: %.2f\n", emp.id, emp.name, emp.designation, emp.salary);
            found = 1;
            break;
        }
    }
    if (!found) {
        printf("Employee with ID %d not found.\n",Id);
    }
    fclose(fp);
}

void deleteEmployee() {
    int Id, found = 0;
    struct Employee emp;
    FILE *fp = fopen("employee.txt", "r");
    FILE *temp = fopen("temp.txt", "w");
    if (fp == NULL || temp == NULL) {
        printf("File error!\n");
        return;
    }
    printf("\nEnter Employee ID to delete: ");
    scanf("%d", &Id);

    while (fscanf(fp, "%d %s %s %f", &emp.id, emp.name, emp.designation, &emp.salary) != EOF) {
        if (emp.id == Id) {
            found = 1;
        } else {
            fprintf(temp, "%d %s %s %.2f\n", emp.id, emp.name, emp.designation, emp.salary);
        }
    }

    fclose(fp);
    fclose(temp);

    remove("employee.txt");
    rename("temp.txt", "employee.txt");

    if (found) {
        printf("Employee record deleted successfully!\n");
    } else {
        printf("Employee with ID %d not found.\n", Id);
    }
}

int main() {
    int choice;
    while (1) {
        printf("\n Employee Management System");
        printf("\n1. Add Employee");
        printf("\n2. View Employees");
        printf("\n3. Search Employee");
        printf("\n4. Delete Employee");
        printf("\n5. Exit");
        printf("\nEnter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1: addEmployee();
                     break;
            case 2: viewEmployees();
                     break;
            case 3: searchEmployee();
                     break;
            case 4: deleteEmployee();
                     break;
            case 5: exit(0);
            default: printf("Invalid choice! Try again.\n");
        }
    }
    return 0;
}
