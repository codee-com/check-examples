// PWR037: Potential precision loss in call to mathematical function
// https://www.appentra.com/knowledge/checks/pwr037

#include <math.h>

double pi(int N) {
  double sum = 0.0;

  for (int i = 0; i < N; i++) {
    double x = (i + 0.5) / N;
    sum += sqrtf(1 - x * x);
  }

  return 4.0 / N * sum;
}
