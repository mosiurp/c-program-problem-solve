#include<stdio.h>
void main()
{
    //int 2.0, 4.0, 7.5, 8.0, 6.4;
    float n1,n2,n3,n4,Average;
    scanf("%f %f %f %f",&n1,&n2,&n3,&n4);
    Average = n1+n2+n3+n4/4;
    printf("Media: %f", Average);
    if (Average>7.0){
        printf("Aluno aprovado.\n");
    }
    else if(Average<5.0){
        printf("Aluno reprovado.\n");
    }
    else if (5.0<Average<6.9){
        printf("Aluno em exame.\n");
    }
    else{
        printf("Nota do exame: %f ", Average );
    }

    Average(4+Average)/2;
    printf("Aluno aprovado.",);

    if(5.0<Average){
        printf("Aluno reprovado.");
    }
    else if(4.9>Average){
        printf("Media final: ");
    }


}
