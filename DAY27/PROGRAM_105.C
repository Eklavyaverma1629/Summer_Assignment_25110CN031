#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int i = 0;
struct sinfo {
    char name[500];
    int roll;
    float cgpa;
    int cid[10];
} st[500];
void add_student()
{

    printf("Enter name of student\n");
    scanf("%s", st[i].name);
    printf("Enter the Roll Number\n");
    scanf("%d", &st[i].roll);
    printf("Enter the CGPA you obtained\n");
    scanf("%f", &st[i].cgpa);
    printf("Enter the course ID of each course\n");
    for (int j = 0; j < 5; j++) {
        scanf("%d", &st[i].cid[j]);
    }
    i = i + 1;
}
void find_rl()
{
    int x;
    printf("Enter the Roll Number of the student\n");
    scanf("%d", &x);
    for (int j = 1; j <= i; j++) {
        if (x == st[i].roll) {
            printf("The Students Details are\n");
            printf("The  name is %s\n",st[i].name);
            printf("The CGPA is %f\n",st[i].cgpa);
            printf("Enter the course ID of each course\n");
        }
        for (int j = 0; j < 5; j++) {
            printf("The course ID are %d\n",
                st[i].cid[j]);
        }
        break;
    }
}
void find_n()
{
    char a[50];
    printf("Enter thE Name"
           " of the student\n");
    scanf("%s", a);
    int c = 0;

    for (int j = 1; j <= i; j++) {
        if (!strcmp(st[j].name, a)) {

            printf("The Students Details are\n");
            printf("The  name is %s\n",st[i].name);
            printf("The Roll Number is %d\n ",st[i].roll);
            printf("The CGPA is %f\n",st[i].cgpa);
            printf(" the course ID of each course\n");
            for (int j = 0; j < 5; j++) {
                printf("The course ID are %d\n",st[i].cid[j]);
            }
            c = 1;
        }
        else
            printf("The First Name not Found\n");
    }
}
void tot_s()
{
    printf("The total number of  Student is %d\n",i);
    printf("\n you can have a max of 5000 students\n");
    printf("you can have %d more students\n",5000 - i);
}
void del_s()
{
    int a;
    printf("Enter the Roll Numberwhich you want to delete\n");
    scanf("%d", &a);
    for (int j = 1; j <= i; j++) {
        if (a == st[j].roll) {
            for (int k = j; k < 49; k++)
                st[k] = st[k + 1];
            i--;
        }
    }
    printf("The Roll Number is removed Successfully\n");
}
void up_s()
{

    printf("Enter the roll number to update the entry : ");
    long int x;
    scanf("%ld", &x);
    for (int j = 0; j < i; j++) {
        if (st[j].roll == x) {
            printf("1. name\n"
                   "2. roll no.\n"
                   "3. CGPA\n"
                   "4. courses\n");
            int z;
            scanf("%d", &z);
            switch (z) {
            case 1:
                printf("Enter the new first name : \n");
                scanf("%s", st[j].name);
                break;
            case 2:
                printf("Enter the new "
                       "roll number : \n");
                scanf("%d", &st[j].roll);
                break;
            case 3:
                printf("Enter the new CGPA : \n");
                scanf("%f", &st[j].cgpa);
                break;
            case 4:
                printf("Enter the new courses \n");
                scanf(
                    "%d%d%d%d%d", &st[j].cid[0],
                    &st[j].cid[1], &st[j].cid[2],
                    &st[j].cid[3], &st[j].cid[4]);
                break;
            }
            printf("UPDATED SUCCESSFULLY.\n");
        }
    }
}
void main()

{
    int choice, count;
    while (i = 1) {
        printf("The Task that you want to perform\n");
        printf("1. Add the Student Details\n");
        printf("2. Find the Student Details by Roll Number\n");
        printf("3. Find the Student Details by First Name\n");
        printf("4. Find the Total number of Students\n");
        printf("5. Delete the Students Details by Roll Number\n");
        printf("6. Update the Students Details by Roll Number\n");
        printf("7. To Exit\n");
        printf("Enter your choice to find the task\n");
        scanf("%d", &choice);
        switch (choice) {
        case 1:
            add_student();
            break;
        case 2:
            find_rl();
            break;
        case 3:
            find_fn();
            break;
        case 4:
            tot_s();
            break;
        case 5:
            del_s();
            break;
        case 6:
            up_s();
            break;
        case 7:
            exit(0);
            break;
        }
    }
}