#include "employee.h"
#include "addRec.h"
#include "countRec.h"
#include "deleteRec.h"
#include "displayAll.h"
#include "printLogo.h"
#include "passWord.h"
#include "searchById.h"
#include "searchByName.h"
#include "updateRec.h"

record emp;
FILE *fp = NULL;

int main()
{
    int catch = 0;
    char choice, ch;
    printLogo();

    // Checking password
    printf("\t\t\tEnter Password: ");
    while (1)
    {
        if (passWord("Prateek") == 0)
        {
            ++catch;
            if (catch == 3)
            {
                printf("\n\t\tWrong password entered three times");
                exit(0);
            }
            system("cls");
            printLogo();
            printf("\n\t\t\tEntered wrong password ");
            printf("\n\t\t\tRe-enter password ");
        }
        else
        {
            break;
        }
    }

    getchar();

    while (1)
    {
        system("cls");
        printLogo();
        printf("\t\t\tAvailable Choices are:\n");
        printf("\t\t\t1. Add a New Record in Database.\n");
        printf("\t\t\t2. Display All Record(s).\n");
        printf("\t\t\t3. Count Total Record(s).\n");
        printf("\t\t\t4. Search a Record.\n");
        printf("\t\t\t5. Delete a Record.\n");
        printf("\t\t\t6. Update a Record.\n");
        printf("\t\t\t7. Exit.\n\n");
        printf("\t\t\tSelect a choice: ");
        scanf("%d", &choice);
        switch (choice)
        {
            case 1:
                system("cls");
                printLogo();
                addRec();
                getch();
                break;

            case 2:
                system("cls");
                printLogo();
                displayAll();
                getch();
                break;

            case 3:
                system("cls");
                printLogo();
                printf("\t\t\tTotal Record(s): %d\n", countRec());
                printf("\n\t\t\t");
                getch();
                break;

            case 4:
                system("cls");
                printLogo();
                printf("\t\t\tSelect a Choice:\n");
                printf("\t\t\t1. Search By ID.\n");
                printf("\t\t\t2. Search By Name.\n\n");
                printf("\t\t\tEnter choice: ");
                scanf("%d", &ch);
                switch (ch)
                {
                    case 1:
                        system("cls");
                        printLogo();
                        searchById();
                        getch();
                        break;

                    case 2:
                        system("cls");
                        printLogo();
                        searchByName();
                        getch();
                        break;

                    default:
                        printf("\t\t\tWrong Choice.");
                        getch();
                }
                getch();
                break;

            case 5:
                system("cls");
                printLogo();
                deleteRec();
                getch();
                break;

            case 6:
                system("cls");
                printLogo();
                updateRec();
                getch();
                break;

            case 7:
                system("cls");
                printLogo();
                printf("\t\t\tThank you for visiting us.");
                getch();
                system("cls");
                exit(0);

            default:
                printf("\t\t\tThis choice is NOT available.");
                getch();
        }
    }

    return 0;
}
