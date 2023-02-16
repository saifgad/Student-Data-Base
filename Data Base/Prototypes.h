#ifndef PROTOTYPES_H_INCLUDED
#define PROTOTYPES_H_INCLUDED
#define NULL 0
#include <stdio.h>
#include <stdlib.h>
typedef struct Student_Info
{
    char Student_Name[5];
    char Student_ID;
    char Student_Year;
    char Subject_ID[3];
    char Subject_Grade[3];
    struct Student_Info* next;

}Student;
Student* Head;
Student S;
char Student_ID;
char Year;
char Name[5];
char ID[3];
char Grade[3];
char counter;
char List[10];
FILE *P;


_Bool IS_Full(void);
_Bool Is_Exist(char Student_ID);
void Delete_Entery(char Student_ID);
void List_ID(char *counter,char *List);
int Size_List(void);
_Bool Add_Entery(char Student_ID,char *Name,char Year,char *ID,char *Grade);
_Bool Read_Entery(char Student_ID,char *Name,char *Year,char *ID,char *Grade);



#endif // PROTOTYPES_H_INCLUDED
