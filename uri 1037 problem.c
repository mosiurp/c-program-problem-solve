#include<stdio.h>
int main()
{
    float x;
    scanf("%f",&x);
   if(x<0 || 100<x){
         printf("Fora de intervalo\n");
   }

    else{
        if(0<=x && x<=25.0000){
            printf("Intervalo [0,25]\n");
        }
        else if(25.00001<x && x<=50.0000000){
                printf("Intervalo (25,50]\n");
        }
        else if(50.0000001<x && x<=75.0000000){
                printf("Intervalo (50,75]\n");
        }
        else if(75.0000001<x && x<=100.0000000){
                printf("Intervalo (75,100]\n");
        }
   }
   return 0;
}
