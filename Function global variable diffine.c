#include<stdio.h>
double pi = 3.1416;
void My_fun()
{
   pi = 3.14;
    return 0;
}
void main()
{
    printf("global variable = %0.4lf\n",pi);
    My_fun();
    printf(" normal pi = %0.4lf",pi);
}
