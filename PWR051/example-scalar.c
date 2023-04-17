// PWR051: Consider applying multithreading parallelism to scalar reduction loop
// https://www.codee.com/knowledge/pwr051/
// Scalar reduction pattern
// https://www.codee.com/knowledge/patterns/scalar-reduction/

#include <stdio.h>

double example(double *A, int n) {
  double sum = 0;
  for (int i = 0; i < n; ++i) {
    sum += A[i];
  }
  printf("%f", sum);
  return sum;
}
