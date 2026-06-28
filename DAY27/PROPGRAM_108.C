// Function prototypes#include <stdio.h>
#include <string.h>
struct Student {
    int rollNumber;
    char name[50];
    float marks[6];
    float total;
    float percentage;
    char grade;
};
void addStudent(struct Student system[], int *count);
void displayAll(const struct Student system[], int count);
void generateMarksheet(const struct Student system[], int count);
char calculateGrade(float percentage);

int main() {
    struct Student system[500];
    int studentCount = 0;
    int choice;

    do {
        printf("\n   MARKSHEET GENERATION SYSTEM      ");
        printf("\n1. Add Student Details & Marks");
        printf("\n2. Display All Student Summary");
        printf("\n3. Generate Specific Marksheet");
        printf("\n4. Exit");
        printf("\nEnter your choice (1-4): ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                addStudent(system, &studentCount);
                break;
            case 2:
                displayAll(system, studentCount);
                break;
            case 3:
                generateMarksheet(system, studentCount);
                break;
            case 4:
                printf("\n Thank you!\n");
                break;
            default:
                printf("\nInvalid choice! Please try again.\n");
        }
    } while (choice != 4);

    return 0;
}

char calculateGrade(float percentage) {
    if (percentage >= 90) return 'A';
    if (percentage >= 80) return 'B';
    if (percentage >= 70) return 'C';
    if (percentage >= 60) return 'D';
    if (percentage >= 40) return 'E';
    return 'F';
}

void addStudent(struct Student system[], int *count) {
    if (*count >= 500) {
        printf("\nSystem database full!\n");
        return;
    }

    struct Student s;
    s.total = 0;

    printf("\nEnter Roll Number: ");
    scanf("%d", &s.rollNumber);
    printf("Enter Student Name: ");
    scanf(" %[^\n]s", s.name);
    printf("\nEnter marks out of 100 for 6 subjects:\n");
    char subjects[6][15] = {"Maths", "physics", "English", "chemistry", "Computer","history"};
    
    for (int i = 0; i < 6; i++) {
        do {
            printf("%s: ", subjects[i]);
            scanf("%f", &s.marks[i]);
            if (s.marks[i] < 0 || s.marks[i] > 100) {
                printf("Invalid marks! Please enter between 0 and 100.\n");
            }
        } while (s.marks[i] < 0 || s.marks[i] > 100);
        
        s.total += s.marks[i];
    }

    s.percentage = s.total / 6;
    s.grade = calculateGrade(s.percentage);

    system[*count] = s;
    (*count)++;
    printf("\nStudent record added successfully!\n");
}

void displayAll(const struct Student system[], int count) {
    if (count == 0) {
        printf("\nNo student records found!\n");
        return;
    }
    printf("\nRoll No | Name | Total Marks | Percentage | Grade ");
    printf("\n");
    for (int i = 0; i < count; i++) {
        printf("\n%d | %s | %f | %f | %c", 
               system[i].rollNumber, system[i].name, system[i].total, system[i].percentage, system[i].grade);
    }
    printf("\n");
}

void generateMarksheet(const struct Student system[], int count) {
    if (count == 0) {
        printf("\nNo student records found!\n");
        return;
    }

    int roll;
    int found = 0;
    printf("\nEnter Roll Number to generate marksheet: ");
    scanf("%d", &roll);

    char subjects[6][15] = {"Maths", "physics", "English", "chemistry", "Computer","history"};

    for (int i = 0; i < count; i++) {
        if (system[i].rollNumber == roll) {
            found = 1;
            printf("\n               MARKSHEET             ");
            printf("\n Roll Number : %d", system[i].rollNumber);
            printf("\n Name        : %s", system[i].name);
            printf("\n---------------------------------------------");
            printf("\n Subject   | Max Marks | Marks Obtained");
            printf("\n");
            for (int j = 0; j < 6; j++) {
                printf("\n %s | 100       | %.2f", subjects[j], system[i].marks[j]);
            }
            printf("\n");
            printf("\n Total Marks : %.2f / %d", system[i].total, 6 * 100);
            printf("\n Percentage  : %.2f%%", system[i].percentage);
            printf("\n Final Grade : %c", system[i].grade);
            printf("\n Result      : %s", (system[i].grade == 'F') ? "FAILED" : "PASSED");
            printf("\n");
            break;
        }
    }

    if (!found) {
        printf("\nStudent with Roll Number %d not found!\n", roll);
    }
}
