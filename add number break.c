#include<stdio.h>
void main(){
    int p=1;
    int s=0;
    while(p<13){
        if(s>10)
        break;
        s=s+p;

         p++;
    }
   printf("%d\n",s);
}
