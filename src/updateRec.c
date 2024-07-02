#include "updateRec.h"

void updateRec(void)
{
    int id;
    int flag = 0;
    FILE *tempf = fopen("temp.bin", "wb+");
    fp = fopen("database.bin", "rb");
    if (tempf == NULL || fp == NULL)
    {
        printf("\t\t\tFile Opening Error....");
        return;
    }
    printf("\t\t\tEnter employee id: ");
    scanf("%d", &id);
    while (fread(&emp, sizeof(emp), 1, fp) == 1)
    {
        if (emp.empid == id)
        {
            flag = 1;
            printf("\t\t\tEnter updated empid : ");
            scanf("%d", &emp.empid);
            printf("\t\t\tEnter updated name  : ");
            fflush(stdin);
            fgets(emp.name, 29, stdin);
            printf("\t\t\tEnter updated Salary:");
            scanf("%f", &emp.salary);
            fwrite(&emp, sizeof(emp), 1, tempf);
            continue;
        }
        fwrite(&emp, sizeof(emp), 1, tempf);
    }
    fclose(fp);
    fclose(tempf);
    system("cls");
    printLogo();
    if (flag == 1)
    {
        remove("database.bin");
        rename("temp.bin", "database.bin");
        printf("\t\t\tRecord is Updated:");
    }
    else
    {
        printf("\t\t\tRecord does not exist.");
        remove("temp.bin");
    }
}
