// OPP003: Offloading Opportunity
// https://www.codee.com/knowledge/opp003/
// Scalar reduction pattern
// https://www.codee.com/knowledge/patterns/scalar-reduction/

#include <iostream>

void example(double *A, int n, double &sum) {
  sum = 0;
  for (int i = 0; i < n; ++i) {
    sum += A[i];
  }
  std::cout << sum;
}
