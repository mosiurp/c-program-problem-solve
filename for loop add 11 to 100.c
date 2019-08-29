#include<stdio.h>
void main(){
    int a;
    int s=0;
   for(a=11; a<=100; a++){
    if(s>530)
        break;
    printf("array number = %d\n",a);
    s=s+a;

   }
    printf("addition result is : %d\n \t",s);
}


