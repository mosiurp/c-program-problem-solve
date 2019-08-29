#include<stdio.h>
void main(){

int n;

while(1){
    printf("\n Enter the user input:\t");
    scanf("\t%d",&n);
    if(n==0){
        break;
    }

    printf("\t output = %d",n);
}
}
