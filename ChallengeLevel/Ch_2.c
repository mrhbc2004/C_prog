#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Employee {
    char name[50];
    int id;
    float salary;
};

int main() {
    int n;
    printf("Enter the number of employees: ");
    scanf("%d", &n);

    struct Employee emp[100];
    FILE *fp;

    for (int i = 0; i < n; i++) {
        printf("\nEnter the details of Employee %d\n", i + 1);

        getchar(); // consume newline left in buffer

        printf("Name: ");
        fgets(emp[i].name, sizeof(emp[i].name), stdin);
        emp[i].name[strcspn(emp[i].name, "\n")] = '\0'; // remove newline

        printf("ID: ");
        scanf("%d", &emp[i].id);

        printf("Salary: ");
        scanf("%f", &emp[i].salary);
    }

    // Write to file
    fp = fopen("employee.txt", "w");
    if (fp == NULL) {
        printf("Error opening file\n");
        exit(1);
    }
    for (int i = 0; i < n; i++) {
        fprintf(fp, "%s %d %.2f\n", emp[i].name, emp[i].id, emp[i].salary);
    }
    fclose(fp);

    // Read from file
    printf("\nReading the contents from the file:\n");
    fp = fopen("employee.txt", "r");
    if (fp == NULL) {
        printf("Error opening file\n");
        exit(1);
    }

    struct Employee temp;
    while (fscanf(fp, "%s %d %f", temp.name, &temp.id, &temp.salary) == 3) {
        printf("Name: %s, ID: %d, Salary: %.2f\n", temp.name, temp.id, temp.salary);
    }

    fclose(fp);
    return 0;
}
