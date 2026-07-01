#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Employee {
    int id;
    char name[50];
    float salary;
};

void addEmployee() {
    struct Employee emp;
    FILE *fp = fopen("emp.txt", "ab");
    if (fp == NULL) {
        printf("Error opening file!\n");
        return;
    }

    printf("\nEnter Employee ID: ");
    scanf("%d", &emp.id);
    printf("Enter Employee Name: ");
    scanf(" %[^\n]s", emp.name);
    printf("Enter Employee Salary: ");
    scanf("%f", &emp.salary);

    fwrite(&emp, sizeof(struct Employee), 1, fp);
    fclose(fp);
    printf("Employee added successfully!\n");
}

void listEmployees() {
    struct Employee emp;
    FILE *fp = fopen("emp.txt", "rb");
    if (fp == NULL) {
        printf("\nNo records found or file does not exist.\n");
        return;
    }

    printf("\n--- Employee List ---\n");
    printf("ID\tName\t\tSalary\n");
    printf("-----------------------------------\n");
    while (fread(&emp, sizeof(struct Employee), 1, fp) == 1) {
        printf("%d\t%s\t\t%.2f\n", emp.id, emp.name, emp.salary);
    }
    fclose(fp);
}

void modifyEmployee() {
    struct Employee emp;
    int targetId, found = 0;
    
    printf("\nEnter Employee ID to modify: ");
    scanf("%d", &targetId);

    FILE *fp = fopen("emp.txt", "r+b");
    if (fp == NULL) {
        printf("No records found!\n");
        return;
    }

    while (fread(&emp, sizeof(struct Employee), 1, fp) == 1) {
        if (emp.id == targetId) {
            found = 1;
            printf("Enter NEW Name: ");
            scanf(" %[^\n]s", emp.name);
            printf("Enter NEW Salary: ");
            scanf("%f", &emp.salary);

            fseek(fp, -sizeof(struct Employee), SEEK_CUR);
            fwrite(&emp, sizeof(struct Employee), 1, fp);
            printf("Record updated successfully!\n");
            break;
        }
    }
    fclose(fp);
    if (!found) printf("Employee ID not found.\n");
}

void deleteEmployee() {
    struct Employee emp;
    int targetId, found = 0;

    printf("\nEnter Employee ID to delete: ");
    scanf("%d", &targetId);

    FILE *fp = fopen("emp.txt", "rb");
    FILE *temp = fopen("temp.txt", "wb");
    if (fp == NULL || temp == NULL) {
        printf("Error opening file!\n");
        return;
    }

    while (fread(&emp, sizeof(struct Employee), 1, fp) == 1) {
        if (emp.id == targetId) {
            found = 1;
            printf("Record deleted successfully.\n");
        } else {
            fwrite(&emp, sizeof(struct Employee), 1, temp);
        }
    }

    fclose(fp);
    fclose(temp);

    remove("emp.txt");
    rename("temp.txt", "emp.txt");

    if (!found) printf("Employee ID not found.\n");
}

int main() {
    int choice;
    while (1) {
        printf("\n EMPLOYEE SYSTEM \n");
        printf("1. Add Employee\n");
        printf("2. List Employees\n");
        printf("3. Modify Employee\n");
        printf("4. Delete Employee\n");
        printf("5. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1: addEmployee(); 
                     break;
            case 2: listEmployees();  
                       break;
            case 3: modifyEmployee();
                       break;
            case 4: deleteEmployee();
                        break;
            case 5: exit(0);
            default: printf("Invalid choice! Try again.\n");
        }
    }
    return 0;
}
