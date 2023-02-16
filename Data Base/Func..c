#include"Prototypes.h"
_Bool IS_Full(void)
{
    if (counter<10)
        return 0;
    else
        return 1;
}
int Size_List(void)
{
    return counter;
}
_Bool Add_Entery(char Student_ID,char *Name,char Year,char *ID,char *Grade)
{
    Student* ADD =(Student*)malloc(sizeof(Student));
    ADD->Student_ID=Student_ID;
    for(int i=0;i<5;i++)
    {
        ADD->Student_Name[i]=*(Name+i);
    }
    ADD->Student_Year=Year;
    for(int i=0;i<3;i++)
    {
        ADD->Subject_ID[i]=*(ID+i);
        ADD->Subject_Grade[i]=*(Grade+i);
    }

    ADD->next=Head;
    Head=ADD;


    counter++;
    return 1;
}
_Bool Read_Entery(char Student_ID,char *Name,char *Year,char *ID,char *Grade)
{
    Student* read=Head;
    while(read!=NULL)
    {
        if(read->Student_ID==Student_ID)
        {
            for(int i=0;i<5;i++)
            {
        *(Name+i)=read->Student_Name[i];
            }
        *Year=read->Student_Year;

            for(int i=0;i<3;i++)
            {
                *(ID+i)=read->Subject_ID[i];
                *(Grade+i)=read->Subject_Grade[i];
            }
            return 1;
        }
        read=read->next;
    }
    return 0;
}
void Delete_Entery(char Student_ID)
{
    Student* Temp1=Head;
    Student* Temp2=Head;
    while(Temp1!=NULL)
    {
        if (Temp1->Student_ID==Student_ID)
        {
            if(Temp1==Temp2)
            {
                Head=Head->next;
                free(Temp1);
            }
            else
            {
                Temp2->next=Temp1->next;
                free(Temp1);
            }
            printf("\nThe Data Deleted\n");
            return;
        }
    }
}
void List_ID(char *counter,char *List)
{
    Student* get=Head;
    char i=counter-1;
    while(get!=NULL)
    {
        List[i]=get->Student_ID;
        get=get->next;
        i--;
    }
}
_Bool Is_Exist(char Student_ID)
{
    Student* Exist=Head;
    while(Exist!=NULL)
    {
        if(Exist->Student_ID==Student_ID)
        {
            return 1;
        }
        Exist=Exist->next;
    }
    return 0;
}

