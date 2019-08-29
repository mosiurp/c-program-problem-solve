#include<stdio.h>
void main()
{
    int x=10,y=12;
    int *p,*q;
    p=&x;
    q=&y;
    printf("x is = %d and y is = %d\n",x,y);
    *p=*q;
    printf("x is = %d and y is = %d",x,y);

}
