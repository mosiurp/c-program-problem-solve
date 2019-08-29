#include<stdio.h>
int main()
{
    int n;
    FILE* name;
    name =fopen("test.txt","r");
    if(name == NULL){
        printf("Error");
        return 0;
    }
    printf("Enter the number of n :\n");
    scanf("%d",n);
    fprintf(name,"%d",n);
    fclose(name);
    return 0;


}
