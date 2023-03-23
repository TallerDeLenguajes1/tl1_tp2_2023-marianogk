#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define N 20

int main()
{
    srand(time(NULL));

    int i ;
    double vt[N], *p;
    p=vt;
    for (i = 0; i < N; i++)
    {
        *p = rand() % 1 + 100;
        printf("%f ", *p);
        p++;

    }

    return 0;
}