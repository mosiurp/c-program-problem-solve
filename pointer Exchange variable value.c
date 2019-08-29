#include<stdio.h>
void main()
{
    int a=10,b=12;
    printf("Before \n");
    printf("%d %d\n", a,b);
    int temp;
    temp=a;
    a=b;
    b=temp;
    printf("After \n");
    printf("%d %d", a,b);
}
