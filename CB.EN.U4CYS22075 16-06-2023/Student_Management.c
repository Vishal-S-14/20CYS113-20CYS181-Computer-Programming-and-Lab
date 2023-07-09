#include<stdio.h>
#define MAX_STUDENTS 3
#include<string.h>

struct student{
    char name[100];
    int age;
    enum s{
        A=1, B, C, D, F
    } score;
} Student[MAX_STUDENTS];

int addStudent(int count) {
    if (count >= MAX_STUDENTS) {
        printf("Maximum number of students reached.\n");
        return 0;
    }
    
    scanf("%s", Student[count].name);
    scanf("%d", &Student[count].age);
    
    char gradeofstudent;
    scanf(" %c", &gradeofstudent);
    
    switch (gradeofstudent) {
        case 'A':
            Student[count].score = A;
            break;
        case 'B':
            Student[count].score = B;
            break;
        case 'C':
            Student[count].score = C;
            break;
        case 'D':
            Student[count].score = D;
            break;
        case 'F':
            Student[count].score = F;
            break;
        default:
            printf("Invalid Score\n");
            return 0;
    }
    
    printf("Student added successfully.\n");
    return 0;
}

int displayStudents(int i) {
    printf("Name: %s\n", Student[i].name);
    printf("Age: %d\n", Student[i].age);
    
    switch (Student[i].score) {
        case A:
            printf("Score: A\n");
            break;
        case B:
            printf("Score: B\n");
            break;
        case C:
            printf("Score: C\n");
            break;
        case D:
            printf("Score: D\n");
            break;
        case F:
            printf("Score: F\n");
            break;
    }
    
    printf("\n");
    return 0;
}

void findHighestScoringStudent(int count) {
    if (count == 0) {
        printf("No Record found\n");
        return;
    }
    
    int max = Student[0].score;
    int j = 0;
    
    for (int i = 1; i < count; i++) {
        if (max > Student[i].score) {
            max = Student[i].score;
            j = i;
        }
    }
    
    printf("Highest-scoring student:\n");
    displayStudents(j);
}

int main() {
    int count = 0;
    int options;
    
    scanf("%d", &options);
    
    while (options != 4) {
        switch (options) {
            case 1:
                if (count >= MAX_STUDENTS) {
                    printf("Maximum number of students reached.\n");
                } else {
                    addStudent(count);
                    count++;
                }
                break;
            case 2:
                if (count == 0) {
                    printf("No Record found\n");
                } else {
                    printf("List of students:\n");
                    for (int i = 0; i < count; i++) {
                        printf("Student %d\n", i + 1);
                        displayStudents(i);
                    }
                }
                break;
            case 3:
                findHighestScoringStudent(count);
                break;
            default:
                printf("Invalid Choice\n");
                break;
        }
        
        scanf("%d", &options);
    }
    
    printf("Exiting the program. Thank you for using our system!\n");
    return 0;
}