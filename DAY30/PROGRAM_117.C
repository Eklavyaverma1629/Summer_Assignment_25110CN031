#include <stdio.h>
#include <string.h>
#define MAX_STUDENTS 100
#define NAME_LENGTH 50
struct Student {
    int rollNumber;
    char name[NAME_LENGTH];
    float marks;
};
void addStudentRecord(struct Student records[], int *count);
void displayAllRecords(const struct Student records[], int count);
void searchStudentRecord(const struct Student records[], int count);

int main() {
    struct Student database[MAX_STUDENTS]; 
     int studentCount = 0;               
    int choice;

    do {
        printf("\n STUDENT RECORD SYSTEM \n");
        printf("1. Add Student Record\n");
        printf("2. Display All Records\n");
        printf("3. Search Record by Roll Number\n");
        printf("4. Exit\n");
        printf("Enter your choice (1-4): ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                addStudentRecord(database, &studentCount);
                break;
            case 2:
                displayAllRecords(database, studentCount);
                break;
            case 3:
                searchStudentRecord(database, studentCount);
                break;
            case 4:
                printf("Exiting program. Goodbye!\n");
                break;
            default:
                printf("Invalid choice! Please select an option between 1 and 4.\n");
        }
    } while (choice != 4);

    return 0;
}
void addStudentRecord(struct Student records[], int *count) {
    if (*count >= MAX_STUDENTS) {
        printf("Error: Database is full! Cannot add more records.\n");
        return;
    }

    printf("\nEnter Roll Number: ");
    scanf("%d", &records[*count].rollNumber);

    getchar(); 

    printf("Enter Full Name: ");
    fgets(records[*count].name, NAME_LENGTH, stdin);
    
    records[*count].name[strcspn(records[*count].name, "\n")] = '\0';

    printf("Enter Marks: ");
    scanf("%f", &records[*count].marks);

    (*count)++; 
    printf("Record added successfully!\n");
}
void displayAllRecords(const struct Student records[], int count) {
    if (count == 0) {
        printf("\nNo student records available.\n");
        return;
    }

    printf("%s | %s | %s\n", "Roll Number", "Name", "Marks");
    printf("\n");
    for (int i = 0; i < count; i++) {
        printf("%d | %s | %.2f\n", records[i].rollNumber, records[i].name, records[i].marks);
    }
    printf("\n");
}
void searchStudentRecord(const struct Student records[], int count) {
    if (count == 0) {
        printf("\nNo student records available to search.\n");
        return;
    }

    int searchRoll, found = 0;
    printf("\nEnter Roll Number to search: ");
    scanf("%d", &searchRoll);

    for (int i = 0; i < count; i++) {
        if (records[i].rollNumber == searchRoll) {
            printf("\nRecord Found \n");
            printf("Roll Number: %d\n", records[i].rollNumber);
            printf("Name:   %s\n", records[i].name);
            printf("Marks:  %.2f\n", records[i].marks);
            found = 1;
            break; 
        }
    }

    if (!found) {
        printf("Record with Roll Number %d not found.\n", searchRoll);
    }
}
