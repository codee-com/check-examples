// PWR031: Replace call to pow by multiplication, division and/or square root
// https://www.appentra.com/knowledge/checks/pwr031

#include <math.h>

float example(float *a, float x) {
  for (int i = 0; i < 10; ++i) {
    a[i] = pow(x, 1.5);
  }
}
