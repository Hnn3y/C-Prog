#include <stdio.h>

int main ()
{
    int U, K, X;
    printf ("Enter your values: ");
    scanf ("%d%d", &K, &X);

    U=0.5*K*X;

    printf("%d\n", U);
    return 0;
}