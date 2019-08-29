#include<stdio.h>
void main(){
int a=20, b=18, c=25;

if((a>b)&&(a>c)){
    printf("a is biggest");
}
if((b>a)&&(b>c)){
    printf("b is biggest");
}
else{
    printf("c is biggest");
}
}
