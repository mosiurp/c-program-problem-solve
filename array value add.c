#include<stdio.h>
void main(){
    int i, s=0;
    int ax[10]={2,6,9,15,7,0,9,5};
    for(i=0; i<10; i++)
        s=s+ax[i];
    printf("%d",s);
}
