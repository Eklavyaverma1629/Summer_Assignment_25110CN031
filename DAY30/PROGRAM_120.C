#include <stdio.h>
#include <string.h>

#define MAX_STUDENTS 100
#define NAME_LENGTH 50
int studentIDs[MAX_STUDENTS];
char studentNames[MAX_STUDENTS][NAME_LENGTH];
float studentMarks[MAX_STUDENTS];
int studentCount = 0;

void addStudent();
void displayStudents();
void searchStudent();
void calculateAverage();

int main() {
    int choice;

    while (1) {
        printf("\n STUDENT MANAGEMENT SYSTEM \n");
        printf("1. Add Student\n");
        printf("2. Display All Students\n");
        printf("3. Search Student by ID\n");
        printf("4. Calculate Class Average\n");
        printf("5. Exit\n");
        printf("Enter your choice (1-5): ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                addStudent();
                break;
            case 2:
                displayStudents();
                break;
            case 3:
                searchStudent();
                break;
            case 4:
                calculateAverage();
                break;
            case 5:
                printf("Exiting program. Goodbye!\n");
                return 0;
            default:
                printf("Invalid choice! Please try again.\n");
        }
    }
    return 0;
}
void addStudent() {
    if (studentCount >= MAX_STUDENTS) {
        printf("Database full! Cannot add more students.\n");
        return;
    }

    printf("\nEnter Student ID: ");
    scanf("%d", &studentIDs[studentCount]);
    getchar(); 
    
    printf("Enter Student Name: ");
    fgets(studentNames[studentCount], NAME_LENGTH, stdin);
    studentNames[studentCount][strcspn(studentNames[studentCount], "\n")] = 0;

    printf("Enter Marks: ");
    scanf("%f", &studentMarks[studentCount]);

    studentCount++;
    printf("Student added successfully!\n");
}
void displayStudents() {
    if (studentCount == 0) {
        printf("\nNo student records found.\n");
        return;
    }

    printf("\n--- STUDENT LIST ---\n");
    printf("%s %s %s\n", "ID", "Name", "Marks");
    printf("\n");
    for (int i = 0; i < studentCount; i++) {
        printf("%d %s %.2f\n", studentIDs[i], studentNames[i], studentMarks[i]);
    }
}
void searchStudent() {
    if (studentCount == 0) {
        printf("\nNo student records available to search.\n");
        return;
    }

    int searchID;
    int found = 0;
    printf("\nEnter Student ID to search: ");
    scanf("%d", &searchID);

    for (int i = 0; i < studentCount; i++) {
        if (studentIDs[i] == searchID) {
            printf("\nStudent Found!\n");
            printf("ID: %d\n", studentIDs[i]);
            printf("Name: %s\n", studentNames[i]);
            printf("Marks: %.2f\n", studentMarks[i]);
            found = 1;
            break;
        }
    }

    if (!found) {
        printf("Student with ID %d not found.\n", searchID);
    }
}
void calculateAverage() {
    if (studentCount == 0) {
        printf("\nNo students to calculate average.\n");
        return;
    }

    float sum = 0;
    for (int i = 0; i < studentCount; i++) {
        sum += studentMarks[i];
    }

    float average = sum / studentCount;
    printf("\nTotal Students: %d\n", studentCount);
    printf("Class Average Marks: %.2f\n", average);
}
