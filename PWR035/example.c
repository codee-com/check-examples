// PWR035: Avoid non-consecutive array access to improve performance
// https://www.codee.com/knowledge/checks/pwr035

void example(float **a, unsigned rows, unsigned cols) {
  for (unsigned i = 0; i < rows; ++i) {
    for (unsigned j = 0; j < cols; ++j) {
      a[0][j] = 0.f;
    }
  }
}
