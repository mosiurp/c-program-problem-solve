
#include<stdio.h>
void main()
{
     int RandomNumber = rand(1, 4);
      if (RandomNumber == '1')  {
           printf("The number was 1");
      }
      else if (RandomNumber == '2')  {
           printf("The number was 2");
           }
        else if (RandomNumber == '3') {
           printf("The number was 3");
      }
       else  {
           printf("The number was 4");
       }
}
