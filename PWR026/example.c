// PWR026: Annotate function for OpenMP offload
// https://www.codee.com/knowledge/pwr026

int foo(int a) { return 2 * a; }

void example(int n, int *A) {
#pragma omp target teams distribute parallel for
  for (int i = 0; i < n; i++) {
    A[i] = foo(i);
  }
}
