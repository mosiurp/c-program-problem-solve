#include<stdio.h>
void main()
{
    int x=10;
    float y=12;
    void *p,*q;
    p=&x;
    q=&y;
    printf("x is = %d\n",*(int*)p);
    printf("y is = %f",*(float*)q);
}
