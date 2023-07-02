#include <stdio.h>
#include <string.h>

// declaring structure
struct struct_example
{
    int integer;
    float decimal;
    char name[20];
};

// declaring union
union union_example
{
    int integer;
    float decimal;
    char name[20];
};

int main()
{
    // creating variable for structure and initializing values
    struct struct_example stru = {5, 15, "John"};

    // creating variable for union and initializing values
    union union_example uni = {5, 15, "John"};

    printf("Data of structure:\ninteger: %d\ndecimal: %.2f\nname: %s\n", stru.integer, stru.decimal, stru.name);
    printf("\nData of union:\ninteger: %d\ndecimal: %.2f\nname: %s\n", uni.integer, uni.decimal, uni.name);

    printf("\nAccessing all members at a time:");
    stru.integer = 163;
    stru.decimal = 75;
    strcpy(stru.name, "John");
    printf("\nData of structure:\ninteger: %d\ndecimal: %.2f\nname: %s\n", stru.integer, stru.decimal, stru.name);

    uni.integer = 163;
    uni.decimal = 75;
    strcpy(uni.name, "John");
    printf("\nData of union:\ninteger: %d\ndecimal: %.2f\nname: %s\n", uni.integer, uni.decimal, uni.name);

    printf("\nAccessing one member at a time:");
    printf("\nData of structure:");
    stru.integer = 140;
    stru.decimal = 150;
    strcpy(stru.name, "Mike");

    printf("\ninteger: %d", stru.integer);
    printf("\ndecimal: %.2f", stru.decimal);
    printf("\nname: %s", stru.name);

    printf("\nData of union:");
    uni.integer = 140;
    uni.decimal = 150;
    strcpy(uni.name, "Mike");

    printf("\ninteger: %d", uni.integer);
    printf("\ndecimal: %.2f", uni.decimal);
    printf("\nname: %s", uni.name);

    printf("\nAltering a member value:\n");
    stru.integer = 512;
    printf("Data of structure:\ninteger: %d\ndecimal: %.2f\nname: %s\n", stru.integer, stru.decimal, stru.name);
    uni.integer = 512;
    printf("Data of union:\ninteger: %d\ndecimal: %.2f\nname: %s\n", uni.integer, uni.decimal, uni.name);

    printf("\nsizeof structure: %d\n", sizeof(stru));
    printf("sizeof union: %d\n", sizeof(uni));

    return 0;
}
