#include"header.h"
void stud_mod(void)
{
    ST *temp;
    int roll;

    if(hptr==NULL)
    {
        printf("\nNo Records Found!\n");
        return;
    }
    printf("\nEnter Roll Number to Modify: ");
    scanf("%d",&roll);

    temp=hptr;
    while(temp!=NULL)
    {
        if(temp->rollno==roll)
            break;

        temp=temp->next;
    }
    if(temp==NULL)
    {
        printf("\nRecord Not Found!\n");
        return;
    }
    printf("\nEnter New Name: ");
    scanf("%s",temp->name);

    printf("Enter New Percentage: ");
    scanf("%f",&temp->percentage);

    printf("\nRecord Modified Successfully!\n");
    stud_save();
}


