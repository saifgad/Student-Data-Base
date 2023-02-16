#include <stdio.h>
#include <stdlib.h>
#include"Prototypes.h"


int main()
{
int choice,Val;


printf("                                 Menu                        ");
printf("\n 1)ADD Data\n 2)Read Data\n 3)Delete Data\n 4)Size of The Data\n 5)List of ID's\n 6)IS ID Exist?\n 7)IS The Data Full?\n 8)Exit\n");





    while(1)
    {
    printf("\nEnter your choice:");
    scanf("%d",&choice);
    switch(choice)
    {
    case 1:
        if(!IS_Full())
        {
        printf("Enter the student ID:");
        scanf("%d",&S.Student_ID);
        if(Is_Exist(S.Student_ID))
            printf("This ID Exist");
        else
        {


        printf("Enter the student name:");
        for(int i=0;i<5;i++)
        {
            scanf("%c",S.Student_Name+i);
        }
        printf("Enter the student year:");
        scanf("%d",&S.Student_Year);
        for(int i=0;i<3;i++)
        {
            fflush(stdin);
            printf("Enter the subject ID:");
            scanf("%c",S.Subject_ID+i);
            printf("Enter the subject Grade:");
            scanf("%d",S.Subject_Grade+i);
        }
        Add_Entery(S.Student_ID,S.Student_Name,S.Student_Year,S.Subject_ID,S.Subject_Grade);
        P = fopen("Data_File","w+");
        fwrite(ADD,sizeof(Student),10,P);
        }
        }
        else
            printf("The Data base is Full\n");
        break;
    case 2:
        printf("Enter the student ID to print Data:");
        scanf("%d",&S.Student_ID);
        if (Is_Exist(S.Student_ID))
        {
   fread(read,sizeof(Student),10,P);

        Read_Entery(S.Student_ID,Name,&Year,ID,Grade);

        printf("\nThe student name:");
        for(int i=0;i<5;i++)
        {
            printf("%c",Name[i]);
        }
        printf("\nThe student year:\n");
        printf("%d",Year);
        printf("\n");

        for(int i=0;i<3;i++)
        {
            printf("The subject ID:\n");
            printf("%c",ID[i]);
            printf("\n");
            printf("The subject Grade:\n");
            printf("%d",Grade[i]);
            printf("\n");
        }
        }
        else
            printf("The ID doesnot Exist");
        break;
    case 3:
        printf("Enter the student ID to Delete Data:");
        scanf("%d",&S.Student_ID);
        if (Is_Exist(S.Student_ID))
        {
            Delete_Entery(S.Student_ID);
        }
        else
            printf("\nThere is no Data to Delete\n");
            break;
    case 4:
        Val=Size_List();
        printf("\nThe size of the Data:%d\n",Val);
        break;
    case 5:
        List_ID(counter,List);
        printf("\nId List: ");
            for(int i = 0;i<counter;i++)
            {
            printf("%d ",List[i]);
            }
            break;
    case 6:
        printf("Enter the student ID:");
        scanf("%d",&S.Student_ID);
    if(Is_Exist(S.Student_ID))
            printf("\nThis ID Exist\n");
            else
            printf("\nThis ID not Exist\n");
            break;
    case 7:
        if(IS_Full())
  printf("\nThis Data is Full\n");
  else
  printf("\nThis Data is not Full\n");
  break;
    case 8:
        return;
        break;


    }

    }




    return 0;
}
