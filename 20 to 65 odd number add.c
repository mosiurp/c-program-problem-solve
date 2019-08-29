#include<stdio.h>
void main(){
    int i,sum=0;
        for(i=20; i<=65; i++){
            if(i%2!=0){
                sum=sum+i;
            }
        }
        printf("%d\t",sum);
}
