#include<stdio.h>
void main()
{
    int i,mark,count;
    int total_mark[]={50,56,56,77,66,77,66,88,99,88,77};
    for(mark=50; mark<=100; mark++){
        count = 0;
        for(i=0; i<11; i++)
        if(total_mark[i]==mark){
            count++;
        }
    }
    printf("Mark = %d count = %d\n",mark,count);
}
