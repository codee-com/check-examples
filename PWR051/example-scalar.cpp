// PWR051: Consider applying multithreading parallelism to scalar reduction loop
// https://www.codee.com/catalog/pwr051/
// Scalar reduction pattern
// https://www.codee.com/catalog/patterns/scalar-reduction/

#include <iostream>

void example(double *A, int n, double &sum) {
  sum = 0;
  for (int i = 0; i < n; ++i) {
    sum += A[i];
  }
  std::cout << sum;
}
