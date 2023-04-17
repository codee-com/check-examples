// PWR052: Consider applying multithreading parallelism to sparse reduction loop
// https://www.codee.com/knowledge/pwr052/
// Sparse reduction pattern
// https://www.codee.com/knowledge/patterns/sparse-reduction/

void example(double *A, int *nodes1, int *nodes2, int *nodes3, int n) {
  for (int nel = 0; nel < n; ++nel) {
    A[nodes1[nel]] += nel * 1;
  }
}
