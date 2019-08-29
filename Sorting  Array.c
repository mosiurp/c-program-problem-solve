#include<stdio.h>
void main(){
    int i ,j,temp;
    int a[10]={3,6,1,2,4 };
    for(i=4; i>=0; i--)
        for(j=0; j<i; j++)
    if(a[j]<a[j+1]){

        temp=a[j];
        a[j]=a[j+1];
        a[j+1]=temp;

    }


}
