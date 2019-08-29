#include<stdio.h>
#include<conio.h>
void main(){
    int i,j,sub[3][3],s=0;
    printf("Enter 6 value\n");
    for(i=0; i<3; i++){
        for(j=0; j<3; j++)
            scanf("%d",&sub[i][j]);
    }
    printf("value Sum of:\n");

     for(i=0; i<3; i++){
        for(j=0; j<3; j++){
        printf("\t%d",sub[i][j]);
            s=s+sub[i][j];
        }
        printf(" = %d",s);
        s=0;
        printf("\n");
     }
     getch();
}
