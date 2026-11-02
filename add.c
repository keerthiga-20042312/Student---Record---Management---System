#include"header.h"
void stud_add(void)
{
    ST *newnode,*temp;
    int max=0;

    newnode=malloc(sizeof(ST));

    if(newnode==NULL)
    {
        printf("\nMemory Allocation Failed!\n");
        return;
    }
    printf("\nEnter Student Name: ");
    scanf("%s",newnode->name);

    printf("Enter Percentage: ");
    scanf("%f",&newnode->percentage);
    temp=hptr;

    while(temp!=NULL)
    {
        if(temp->rollno>max)
            max=temp->rollno;

        temp=temp->next;
    }
    newnode->rollno=max+1;
    newnode->next=NULL;

    if (hptr==NULL)
    {
        hptr=newnode;
    }
    else
    {
        temp=hptr;

        while(temp->next!=NULL)
            temp=temp->next;

        temp->next=newnode;
    }
    printf("\nStudent Added Successfully!");
    printf("\nRoll Number:%d\n",newnode->rollno);

    stud_save();
}

