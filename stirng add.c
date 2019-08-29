#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
    char name1[20]="Mosiur";
    char name2[20]="Rahman";
    printf("First string : %s\t\n",name1);
    printf("Second string : %s\n",name2);
   // gets(name1);
   // gets(name2);
    strcat(name1,name2);
    printf("Final str is : %s\n",name1);

    getch();
}
