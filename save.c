#include "header.h"
void stud_save(void)
{
    ST *temp;
    FILE *fp;

    fp = fopen("student.txt", "w");
    if(fp==NULL)
    {
        printf("\nFile Opening Error!\n");
        return;
    }
    temp=hptr;

    while(temp!=NULL)
    {
        fprintf(fp, "%d %s %.2f\n",temp->rollno,temp->name,temp->percentage);
        temp=temp->next;
    }
    fclose(fp);
}

void stud_load(void)
{
    ST *newnode,*temp;
    FILE *fp;

    fp=fopen("student.txt", "r");

    if(fp==NULL)
        return;
    while(1)
    {
        newnode=malloc(sizeof(ST));
        if(newnode==NULL)
            break;

        if(fscanf(fp,"%d %s %f",&newnode->rollno,newnode->name,&newnode->percentage)!=3)
        {
            free(newnode);
            break;
        }
        newnode->next=NULL;

        if(hptr==NULL)
            hptr=newnode;
        else
        {
            temp=hptr;

            while(temp->next!=NULL)
                temp=temp->next;

            temp->next=newnode;
        }
    }
    fclose(fp);
}

