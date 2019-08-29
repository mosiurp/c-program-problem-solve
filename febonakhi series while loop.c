#include <stdio.h>
void main()
{
    int n1 = 0, n2 = 1, nextTerm = 0, n;

    printf("Enter a positive number: ");
    scanf("%d", &n);
    printf("Fibonacci Series: %d, %d, ", n1, n2);

    nextTerm = n1 + n2;

    while(nextTerm <= n)
    {
        printf("%d, ",nextTerm);
        n1 = n2;
        n2 = nextTerm;
        nextTerm = n1 + n2;
    }
}
