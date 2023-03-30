#include <stdio.h>

int main() {
    int n, roll[100], sub1[100], sub2[100], sub3[100], sub4[100], sub5[100], total[100], x;
    float avg[100];
    printf("Enter the number of students: ");
    scanf("%d", &n);

    if (n > 0) {
        for (x = 0; x < n; x++) {
            printf("Enter roll number of student %d: ", x + 1);
            scanf("%d", &roll[x]);
            printf("Enter marks of student %d in maths: ", x + 1);
            scanf("%d", &sub1[x]);
            printf("Enter marks of student %d in social studies: ", x + 1);
            scanf("%d", &sub2[x]);
            printf("Enter marks of student %d in physics: ", x + 1);
            scanf("%d", &sub3[x]);
            printf("Enter marks of student %d in chemistry: ", x + 1);
            scanf("%d", &sub4[x]);
            printf("Enter marks of student %d in english: ", x + 1);
            scanf("%d", &sub5[x]);

            total[x] = sub1[x] + sub2[x] + sub3[x] + sub4[x] + sub5[x];
            avg[x] = (float) total[x] / 5;
        }

        for (x = 0; x < n; x++) {
            printf("\nRoll number of the student: %d", roll[x]);
            printf("\nMarks of the student: %d, %d, %d, %d, %d", sub1[x], sub2[x], sub3[x], sub4[x], sub5[x]);
            printf("\nTotal marks of the student: %d", total[x]);
            printf("\nAverage marks of the student: %.2f\n", avg[x]);
        }
    }
    else {
        printf("The number of students cannot be less than 1\n");
    }

    return 0;
}
