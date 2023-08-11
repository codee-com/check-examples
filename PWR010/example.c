// PWR010: Avoid column-major array access in C/C++
// https://www.codee.com/knowledge/pwr010

void example(int **A) {
  for (int j = 0; j < 100; ++j) {
    for (int i = 0; i < 100; ++i) {
      A[i][j] = 0;
    }
  }
}
