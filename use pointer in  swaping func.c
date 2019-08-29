#include<stdio.h>
 saw(int *a, int *b)
{
    int temp;
    temp=*a;
    *a=*b;
    *b=temp;
}
void main()
{
    int a=10,b=12;
    printf("Before Apply Func :\n");
    printf("value of a = %d value of b = %d\n",a,b);
    saw(&a,&b);
    printf("After Apply Func :\n");
    printf("value of a = %d value of b = %d",a,b);

}
