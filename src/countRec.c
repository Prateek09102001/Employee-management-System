#include "countRec.h"

int countRec(void)
{
    int count = 0;
    fp = fopen("database.bin", "rb");
    fseek(fp, 0, 2);
    count = ftell(fp) / sizeof(emp);

    if (fp == NULL)
    {
        printf("\t\t\tFile Opening Error....");
        return 0;
    }
    while (fread(&emp, sizeof(emp), 1, fp) == 1)
    {
        count++;
    }

    fclose(fp);

    return count;
}
