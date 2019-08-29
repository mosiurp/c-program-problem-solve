#include<stdio.h>
void main()
{
    int i,j;
    char name[]="mosiur";
    printf("\n");
    for(i=0; name[i]!='\0'; i++){
        j=i+1;
        printf("%-10.*s\n",j,name);
    }
}
