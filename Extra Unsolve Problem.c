#include<stdio.h>
void main()
{
    int a=10,b=19;
    int *p;
    p=&a;
    int *q;
    q=&b;

  printf("%d %d\n",a,b);
  printf("%d %d\n",*p,*q);
  printf("%d %d\n",&a,&b);
  printf("%d %d\n",p,q);

}
