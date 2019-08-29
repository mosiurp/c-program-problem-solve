#include<stdio.h>
int multi(int a,int b)
{
    int mul;
    mul=a*b;
    return mul;
}
void main()
{
    int a,b,c;
    printf("Enter the two value :\n");
    scanf("%d %d",&a,&b);
    c=multi(a,b);
    printf("mul is = %d",c);
}

