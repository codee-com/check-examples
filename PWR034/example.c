// PWR034: Avoid strided array access to improve performance
// https://www.codee.com/catalog/pwr034

void example(float *a, unsigned size) {
  for (unsigned i = 0; i < size; i += 2) {
    a[i] = 0.f;
  }
}
