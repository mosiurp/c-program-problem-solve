#include<stdio.h>
int biggest(int a,int b)
{
    if(a>b){
        printf("a is biggest ;\n");
    }
    else{
        printf("b is biggest ;");
    }
    return 0;
}
void main()
{
    int a,b;
    printf("enter the tow input \n");
    scanf("%d %d",&a,&b);
    biggest(a,b);

}
