// PWR017: Using while loops instead of for loops may inhibit vectorization
// https://www.appentra.com/knowledge/checks/pwr017

int example(int *A) {
  int sum = 0;
  int i = 0;
  while (i < 1000) {
    sum += A[i++];
  }
  return sum;
}
