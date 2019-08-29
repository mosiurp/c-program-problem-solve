#include<stdio.h>
void main(){
    int Number;
    printf("Enter the integer Number:\t");
    scanf("%d",&Number);

        if(Number<0){
            printf("Number is Negative ");
        }

        else if(Number>0){
            printf("Number is Positive ");
        }
        else{
            printf("Number is 0 ");
        }
}
