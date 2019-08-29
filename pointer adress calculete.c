#include<stdio.h>
void main()
{
    int q=10;
    int *p;
    p=&q;
    printf("Address is = %d\n",&q);
    printf("Address is = %d\n",p);
    printf("value of q point by p = %d",*p);
    getch();
}
