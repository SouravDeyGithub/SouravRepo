#include <stdio.h>
#include <stdlib.h>
#include <string.h>

    struct Emp{
    char name[20];
    char department[50];
    int age;
};

    int main() {
    struct Emp e1;
    FILE *file;

    file = fopen("employee_records.txt", "w");
    if (file == NULL) {
        printf("Error opening file!\n");
        return 1;
    }

    printf("Enter Employee Name: ");
    scanf(" %[^\n]", &e1.name);
    printf("Enter Employee Department: ");
    scanf(" %[^\n]", &e1.department);
    printf("Enter Employee Age: ");
    scanf("%d", &e1.age);

    fprintf(file, "Name: %s\n", e1.name);
    fprintf(file, "Department: %s\n", e1.department);
    fprintf(file, "Age: %d\n", e1.age);

    fclose(file);

    printf("Employee record saved to employee_records.txt\n");

    return 0;
}
