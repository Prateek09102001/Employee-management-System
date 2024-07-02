#include "passWord.h"

int passWord(char *p)
{
    char ch;
    int i, flag = 1;
    for (i = 0; i < strlen(p); i++)
    {
        ch = getch();
        putchar('*');
        if (ch != p[i])
        {
            flag = 0;
        }
    }
    return flag;
}
