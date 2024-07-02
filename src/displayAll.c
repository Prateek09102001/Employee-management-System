#include "displayAll.h"

void displayAll(void)
{
    fp = fopen("database.bin", "rb");
    if (fp == NULL)
    {
        printf("\t\t\tFile Opening Error....");
        return;
    }
    printf("\n\n\n\t\tRecord(s) in Database:\n\n");
    printf("%25s |%20s  |%17s", "Emp ID", "Name", "Salary");
    printf("\n%27s%22s%19s", "      ____|", "|", "_");
    while (fread(&emp, sizeof(emp), 1, fp) == 1)
    {
        printf("\n%25d |", emp.empid);
        printf("%20.*s  |", strlen(emp.name) - 1, emp.name);
        printf("%17.2f", emp.salary);
    }
    printf("\n%27s%22s%19s", "      ____|", "|", "_");
    fclose(fp);
}
