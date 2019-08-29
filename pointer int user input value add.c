#include<stdio.h>
add(int *a,int *b)
{
    int sub;
    sub=*a+*b;
    printf("sub is = %d",sub);
}
void main()
{
    int a,b,sub;
    printf("Enter two input:\n");
    scanf("%d %d",&a,&b);
    add(&a,&b);
}
