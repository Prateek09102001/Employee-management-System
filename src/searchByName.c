#include "searchByName.h"

void searchByName(void)
{
    char name[30];
    fflush(stdin);
    printf("\t\t\tEnter employee Name: ");
    fgets(name, 29, stdin);
    system("cls");
    printLogo();

    fp = fopen("database.bin", "rb");
    if (fp == NULL)
    {
        printf("\t\t\tFile Opening Error....");
        return;
    }
    while (fread(&emp, sizeof(emp), 1, fp) == 1)
    {
        if (strcmp(name, emp.name) == 0)
        {
            printf("\n\t\t\tNAME  : %s", emp.name);
            printf("\t\t\tID    : %d\n", emp.empid);
            printf("\t\t\tSalary: %.2f", emp.salary);
            fclose(fp);
            return;
        }
    }
    printf("\t\t\tThis record does not exist.");
    fclose(fp);
}
