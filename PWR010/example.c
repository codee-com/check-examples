// PWR010: Avoid column-major array access in C/C++
// https://www.codee.com/knowledge/pwr010

void example(int **A, int *B) {
  for (int i = 0; i < 100; ++i) {
    double first = A[0][i];
    for (int j = 1; j < 100; ++j) {
      A[j][i] = first;
    }
  }
}
