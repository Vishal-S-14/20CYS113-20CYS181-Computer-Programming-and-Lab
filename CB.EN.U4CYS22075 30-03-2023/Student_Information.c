#include<stdio.h>
#include<string.h>

int main(){
    // Declaring variables
    char roll[10], name[50], address[100], blood[5], department[50];
    int phone;
    // Gathering information
    printf("Enter your Roll: ");
    scanf("%s", roll);
    printf("Enter your Name: ");
    scanf(" %[^\n]s", name);
    printf("Enter your Address: ");
    scanf(" %[^\n]s", address);
    printf("Enter your Blood group: ");
    scanf("%s", blood);
    printf("Enter your phone no: ");
    scanf("%d", &phone);
    printf("Enter your Department assigned: ");
    scanf(" %[^\n]s", department);
    // Final Output
    printf("STUDENT INFORMATION\n");
    printf("THE ROLL NUMBER IS %s\n", roll);
    printf("THE NAME IS %s\n", name);
    printf("THE ADDRESS IS %s\n", address);
    printf("THE BLOOD GROUP IS %s\n", blood);
    printf("THE PHONE NUMBER IS %d\n", phone);
    printf("THE DEPARTMENT IS %s\n", department);
    return 0;
}
