#include"header.h"
void stud_show(void)
{
    ST *temp=hptr;

    if(hptr==NULL)
    {
        printf("\nNo Records Found!\n");
        return;
    }
    printf("\nSTUDENT RECORD LIST\n");
    printf("\nRoll Number\tName\t\tPercentage\n");
    printf("---------------------------------------------\n");
    while(temp!=NULL)
    {
        printf("%d\t\t%s\t\t%.2f\n",temp->rollno,temp->name,temp->percentage);

        temp=temp->next;
    }
    printf("---------------------------------------------\n");
}


