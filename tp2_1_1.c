#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define N 20

int main()
{
    srand(time(NULL));

    int i;
    double vt[N];
    for (i = 0; i < N; i++)
    {
        vt[i] = rand() % 1 + 100;
        printf("%f ", vt[i]);
    }

    return 0;
}
