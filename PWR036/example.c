// PWR036: Avoid indirect array access to improve performance
// https://www.appentra.com/knowledge/checks/pwr036

void example(float *a, unsigned *b, unsigned size) {
  for (unsigned i = 0; i < size; ++i) {
    a[b[i]] = 0.f;
  }
}
