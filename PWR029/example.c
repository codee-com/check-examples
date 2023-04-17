// PWR029: Remove integer increment preventing performance optimization
// https://www.codee.com/knowledge/checks/pwr029

void example(float *a, float *b, unsigned size) {
  unsigned k = 0;
  for (unsigned i = 0; i < size; i++) {
    b[i] = a[k] + 1;
    k = k + 1;
  }
}
