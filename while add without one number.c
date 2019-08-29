#include<stdio.h>
void main(){
    int a;
    int s=0;
   for(a=1; a<=30; a++){
    if(a==21)
        continue;
    printf("array number = %d\n",a);
    s=s+a;
   }
   printf("addition result is : %d\n \t",s);
}

