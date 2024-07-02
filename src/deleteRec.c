#include "deleteRec.h"

void deleteRec(void)
{
    int id;
    int flag = 0;
    char YN;
    FILE *tempf = fopen("temp.bin", "wb+");
    fp = fopen("database.bin", "rb");
    if (tempf == NULL || fp == NULL)
    {
        printf("\t\t\tFile Opening Error....");
        return;
    }
    printf("\t\t\tEnter employee id: ");
    scanf("%d", &id);
    printf("\t\t\tDo you want to permanently delete this file?  (y/n)  ");
    fflush(stdin);
    scanf("%c", &YN);
    YN = toupper(YN);
    if (YN == 'Y')
    {
        while ((fread(&emp, sizeof(emp), 1, fp)) == 1)
        {
            if (emp.empid == id)
            {
                flag = 1;
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
            printf("\t\t\tRecord is deleted:");
        }
        else
        {
            printf("\t\t\tRecord does not exist.");
            remove("temp.bin");
        }
    }
    else
    {
        printf("\nFile Deletion Terminated.\n");
        fclose(fp);
        return;
    }
}
