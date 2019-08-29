#include<stdio.h>

int xyReturn(int x)
{
    int y=x;
    x=2*y;
    return (x*y);
}
void main()
{
    int x=10,y=20,z;
    z=xyReturn(x);
    printf("%d %d %d ",x,y,z);
}
