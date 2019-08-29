#include<stdio.h>
void main()
{
    char name[100];
    int d;

    printf("Enter the Articles \n");
    gets(name);
    printf("Haw many charter you seen:\t");
    scanf("%d",&d);
    printf("your Articles is : %-10.*s",d,name);
}
