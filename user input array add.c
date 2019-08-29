#include<stdio.h>
void main()
{
    int i,sum=0,size;
    int num[]={};

    printf("Enter the number of Array size\t");
    scanf("%d",&size);
    printf("Array size is = %d\n",size);

    for(i=0; i<size; i++){
    scanf("%d",&num[i]);
        sum=sum+num[i];

    }
    printf("Total number is = %d",sum);

}
