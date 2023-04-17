// PWD009: Incorrect privatization in parallel region
// https://www.codee.com/knowledge/checks/pwd009

void example(int m, double *A, double *B, double *C) {
  double temp;

  // "C" should be shared
#pragma omp parallel for private(temp, C)
  for (int i = 0; i < m; i++) {
    temp = A[i] * B[i];
    C[i] = C[i] + temp;
  }
}
