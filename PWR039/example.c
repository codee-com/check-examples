// PWR039: Consider loop interchange to improve the locality of reference and
// enable vectorization https://www.appentra.com/knowledge/checks/pwr039

void zero(double **A, int n) {
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < n; j++) {
      A[j][i] = 0.0;
    }
  }
}
