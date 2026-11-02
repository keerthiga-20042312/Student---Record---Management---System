#include "header.h"
void stud_sort(void)
{
    ST *temp,*nextnode;
    int roll;
    float per;
    char name[30],choice;

    if(hptr==NULL)
    {
        printf("\nNo Records Found!\n");
        return;
    }
    printf("\nSORT STUDENT RECORD");
    printf("\nN/n : Sort by Name");
    printf("\nP/p : Sort by Percentage");

    printf("\n\nEnter your choice: ");
    scanf(" %c",&choice);

    for(temp=hptr;temp!=NULL;temp=temp->next)
    {
        for(nextnode=temp->next;nextnode!=NULL;nextnode=nextnode->next)
        {
            if((choice=='N'||choice=='n')&&strcmp(temp->name,nextnode->name)>0)
            {
                roll=temp->rollno;
                temp->rollno=nextnode->rollno;
                nextnode->rollno=roll;

                strcpy(name, temp->name);
                strcpy(temp->name, nextnode->name);
                strcpy(nextnode->name, name);

                per=temp->percentage;
                temp->percentage=nextnode->percentage;
                nextnode->percentage=per;
            }
            else if((choice=='P'||choice=='p')&&temp->percentage>nextnode->percentage)
            {
                roll=temp->rollno;
                temp->rollno=nextnode->rollno;
                nextnode->rollno=roll;

                strcpy(name,temp->name);
                strcpy(temp->name,nextnode->name);
                strcpy(nextnode->name,name);

                per=temp->percentage;
                temp->percentage=nextnode->percentage;
                nextnode->percentage=per;
            }
        }
    }

    if(choice=='N'||choice=='n')
        printf("\nSorted by Name Successfully!\n");
    else if(choice=='P'||choice=='p')
        printf("\nSorted by Percentage Successfully!\n");
    else
    {
        printf("\nInvalid Choice!\n");
        return;
    }
    stud_save();
    stud_show();
}

