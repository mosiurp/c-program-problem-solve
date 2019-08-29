#include<stdio.h>
void main(){
    int i,j,temp;
    int say[10]={4,5,6,3,4,5,3,4,5,6};

    for(i=0, j=9; i<10; i++, j--){

        printf(" %d\t",say[i]);

        printf(" and  %d\t",say[j]);
    }
}

