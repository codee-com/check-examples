// PWR011: Outline loop to increase compiler and tooling code coverage
// https://www.appentra.com/knowledge/checks/pwr011

#include <stdlib.h>

typedef struct
{
    double *A;
    double *B;
} data;

void foo()
{
    data S;
    S.A = (double *)malloc(sizeof(double) * 1000);
    S.B = (double *)malloc(sizeof(double) * 1000);

    for (size_t i = 0; i < 1000; i++)
    {
        S.A[i] = 0;
    }

    free(S.B);
    free(S.A);
}
