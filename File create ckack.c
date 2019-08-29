#include<stdio.h>
void main()
{
    FILE* chack;
    chack = fopen("test.txt","r");
    if( chack == NULL){
        printf("\n File does not Exist");
    }else
    {
        printf("\nFile Exist");
    }
    fclose(chack);
}
