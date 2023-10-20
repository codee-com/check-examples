// PWR042: Loop nest can benefit from loop interchange, but reduction variable
// initialization prevents loop interchange
// https://www.codee.com/catalog/pwr042

void loopInterchange(int n, double **A, double *B) {
  for (int i = 0; i < n; i++) {
    double s = 0.0;
    for (int j = 0; j < n; j++) {
      s += A[j][i];
    }
    B[i] = 0.1 * s;
  }
}
