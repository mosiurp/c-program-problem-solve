#include<stdio.h>
void main(){
    int i, s=0;
    int sum[5];
    printf("Enter the five element of array :\n");
    for(i=0; i<5; i++)
    scanf("%d",&sum[i]);
    for(i=0; i<5; i++)
        s=s+sum[i];
    printf("Total number = %d",s);

}
