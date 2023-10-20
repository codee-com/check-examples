// PWD003: Copy of pointer value instead of pointed-to data
// to an accelerator device
// https://www.codee.com/catalog/pwd003

void example_omp(int* a, int* b, int* sum, int size) {
  // Array bounds should be specified
  #pragma omp target map(to: a, b) map(from: sum)
  #pragma omp parallel for default(none) shared(a, b, sum)
  for (int i = 0; i < size; i++) {
    sum[i] = a[i] + b[i];
  }
}
