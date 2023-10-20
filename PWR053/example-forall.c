// PWR053: consider applying vectorization to forall loop
// https://www.codee.com/catalog/pwr053/
// Forall pattern
// https://www.codee.com/catalog/patterns/forall/

void example(double *D, double *X, double *Y, int n, double a) {
  for (int i = 0; i < n; ++i) {
    D[i] = a * X[i] + Y[i];
  }
}
