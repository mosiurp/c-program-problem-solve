#include<stdio.h>
int main(){

int i,sum=0;

for(i=70; i<=90; i++){
    if(i!=75){
        sum=sum+i;
    }
}
    printf("%d",sum);

return 0;
}
