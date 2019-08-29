#include<stdio.h>
void main()
{
    char name[20];
    int i=0,length;
    printf("Enter the name:\n");
    gets(name);
    while(name[i]!='\0'){
        i++;
        length=i;
    }
    printf("\n length on this name :\t %d",length);
}
