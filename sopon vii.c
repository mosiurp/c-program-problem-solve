
#include<stdio.h>
void main(){
    int i, count=0;
    for(i=1; i<=100; i++){
        if(i%2==0){
            printf("Even = %d\n",i);
            count++;

        }
    }

            printf("Total even number count is  = %d\n",count);
}
