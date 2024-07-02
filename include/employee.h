#ifndef EMPLOYEE_H
#define EMPLOYEE_H

#include <stdio.h>

struct employee {
    int empid;
    char name[30];
    float salary;
};

typedef struct employee record;

extern record emp;
extern FILE *fp;

#endif
