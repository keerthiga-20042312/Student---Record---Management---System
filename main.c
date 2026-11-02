#include"header.h"
ST *hptr=NULL;
void stud_load(void);
int main()
{
    char choice;
    stud_load();

    while (1)
    {
        printf("\nSTUDENT RECORD MENU\n");
        printf("\nA/a : Add New Record");
        printf("\nD/d : Delete a Record");
        printf("\nS/s : Show the List");
        printf("\nM/m : Modify a Record");
        printf("\nT/t : Sort the List");
        printf("\nV/v : Save the Records");
        printf("\nE/e : Exit");

        printf("\nEnter your choice: ");
        scanf(" %c", &choice);

        switch(choice)
        {
            case 'A':
            case 'a':
                stud_add();
                break;

            case 'D':
            case 'd':
                stud_del();
                break;

            case 'S':
            case 's':
                stud_show();
                break;

            case 'M':
            case 'm':
                stud_mod();
                break;

            case 'T':
            case 't':
                stud_sort();
                break;

            case 'V':
            case 'v':
                stud_save();
                printf("\nRecords Saved Successfully!\n");
                break;

            case 'E':
            case 'e':
                stud_save();
                printf("\nThank You!\n");
                return 0;

            default:
                printf("\nInvalid Choice!\n");
        }
    }
}


