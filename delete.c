#include"header.h"
void stud_del(void)
{
    ST *temp,*prev;
    int roll;

    if(hptr==NULL)
    {
        printf("\nNo Records Found!\n");
        return;
    }
    printf("\nEnter Roll Number to Delete: ");
    scanf("%d",&roll);

    temp=hptr;
    prev=NULL;
    while(temp!=NULL&&temp->rollno!=roll)
    {
        prev=temp;
        temp=temp->next;
    }
    if(temp==NULL)
    {
        printf("\nRecord Not Found!\n");
        return;
    }
    if(prev==NULL)
        hptr=temp->next;
    else
        prev->next=temp->next;

    free(temp);
    printf("\nRecord Deleted Successfully!\n");

    stud_save();
}

