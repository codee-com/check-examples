// PWD011: Missing OpenMP lastprivate clause
// https://www.appentra.com/knowledge/checks/pwd011

double example(int m, double *A, double *B, double *C) {
  double liveOut;

  // liveOut is private but used after the loop, should be lastprivate
#pragma omp parallel for private(liveOut)
  for (int i = 0; i < m; i++) {
    liveOut = A[i] * B[i];
    C[i] = C[i] + liveOut;
  }
  liveOut += 5;
  return liveOut;
}
