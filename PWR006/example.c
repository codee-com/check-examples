// PWR006: Avoid privatization of read-only variables
// https://www.codee.com/knowledge/pwr006

#define SIZE 5

void foo() {
  int A[SIZE] = {1, 2, 3, 4, 5};
  int B[SIZE] = {5, 4, 3, 2, 1};
  int sum[SIZE];

  #pragma omp parallel for shared(sum) firstprivate(A, B)
  for (int i = 0; i < SIZE; i++) {
    sum[i] = A[i] + B[i];
  }
}
