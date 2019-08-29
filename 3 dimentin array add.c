#include<stdio.h>
void main()
{
    int i,j,s;
    int ax[10][10]={{6,3,2},{0,11,4},{15,9,0}};

    for(i=0; i<3; i++){
            printf("%d\n",ax[i][j]);
        for(j=0; j<3; j++){
            printf("%d\n",ax[i][j]);
           // s=ax[i][j]+ax[i][j];
           // printf("%d",s);
        }
    }

}

