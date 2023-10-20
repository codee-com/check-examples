// PWD006: Missing deep copy of non-contiguous data to the GPU
// https://www.codee.com/catalog/pwd006

#include <stdlib.h>

void foo(int **A) {
   #pragma omp target teams distribute parallel for map(tofrom:A)
   for (size_t i = 0; i < 10; i++) {
    A[i][i] += i;
   }
}
