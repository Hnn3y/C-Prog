#include <stdio.h>
int main () 
{
    int x=6, y=7;

    _Bool isGreater = x > y;
    _Bool isEqualto = x==y;

    printf("is x greater? : %d\n", isGreater);
    printf("is x equal to y?: %d\n", isEqualto);

    return 0;
}