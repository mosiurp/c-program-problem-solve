#include<stdio.h>
void main(){
    int i,j;
    int alexa[5][5]={ {2,3,4},{5,6,7} };
        for(i=0; i<2; i++){
            for(j=0; j<3; j++){

                printf("%d\n",alexa[i][j]);
            }
        }

}
