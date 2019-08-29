#include<stdio.h>
void main(){

int number=75,count;
    for(count=1; count<=10; count++){
        if(number>300)
            break;
         number=number+75;
    }
        printf("%d",number);

}


