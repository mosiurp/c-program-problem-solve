#include<stdio.h>
#include<math.h>
int main()
{
    float A,B,C,x,y,part;
    scanf("%f %f %f",&A,%B,%C);

    part = (B*B) - (4*(A)*(C));

    if(part > 0 && A == 0) {

		part = sqrt(part);
		x = (-B + part)/(2*A);
		y = (-B - part)/(2*A);
		printf("Root1 = %.5f\n", x);
		printf("Root2 = %.5f\n", y);
	}
	else
	 {
		printf("\nImpossivel calcular");
	}
	return 0;

}
