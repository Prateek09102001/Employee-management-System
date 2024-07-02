#include "addRec.h"

void addRec(void)
{
    fp = fopen("database.bin", "ab+");
    if (fp == NULL)
    {
        printf("\t\t\tFile Opening Error....");
        return;
    }
    fflush(stdin);
    printf("\t\t\tEnter Employee Name   : ");
    fgets(emp.name, 29, stdin);
    printf("\t\t\tEnter Employee ID     :");
    scanf("%d", &emp.empid);
    printf("\t\t\tEnter Employee Salary :");
    scanf("%f", &emp.salary);

    fwrite(&emp, sizeof(emp), 1, fp);

    fclose(fp);
    printLogo();
    printf("\t\t\tRecord is Added Successfully.");
}
