// PWD003: Copy of pointer value instead of pointed-to data
// to an accelerator device
// https://www.codee.com/knowledge/pwd003

void example_acc(int* a, int* b, int* sum, int size) {
  // Array bounds should be specified
  #pragma acc data copyin(a, b) copyout(sum)
  #pragma acc parallel loop
  for (int i = 0; i < size; i++) {
    sum[i] = a[i] + b[i];
  }
}
