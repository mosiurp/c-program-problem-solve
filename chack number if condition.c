#include<stdio.h>
void main() {
   int  Number = 5;
    char Letter = 'T';
   char Word[30] = "Brugbart";
    if ((Number == 5) && (Letter == 'T')&& (Word == "Brugbart")) {
            printf("Both the Number and the Letter matched!");
    }
     else {
            printf("Something did not match!");
     }
}
