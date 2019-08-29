#include<stdio.h>
int man(int a, int b)
{
   int c;
   c=a%b;
   return c;
}
int call()
{
    printf("Hard Work:");
    return 0;
}
void main()
{
    int a,b,c;
    printf("Enter tow Number :\n");
    scanf("%d %d",&a,&b);
    c=man(a,b);
    printf("%d\n",c);
    call();


}
