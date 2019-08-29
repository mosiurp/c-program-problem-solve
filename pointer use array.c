#include<stdio.h>
int main()
{
    int array[5] = {5,4,3,2,1};
    int *p;
    int i;
    p = array;
    for(i=0; i<5; i++){
            printf("%d\t",*p);
        p++;
    }
    return 0;
}
