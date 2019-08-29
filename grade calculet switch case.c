#include<stdio.h>
void main()
{
    int mark,n;
    printf("Enter the mark: \n");
    scanf("%d",&mark);
    if((mark>=80)&&(mark<=100)){
            n=1;

    }
        else if((mark>=70)&&(mark<=79)){
             n=2;
            printf("2");
        }
            else if((mark>=60)&&(mark<=69)){
                n=3;
            }
                  else if((mark>=00)&&(mark<=59)){
                    n=4;
            }

    switch(n){
    case 1:
        printf("Result is A");
        break;
    case 2:
        printf("Result is B");
        break;
    case 3:
        printf("Result is C");
        break;
    case 4:
        printf("Result is F");
        break;
    }

}
