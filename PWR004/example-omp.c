// PWR004: Declare OpenMP scoping for all variables
// https://www.codee.com/knowledge/checks/pwr004

void example(int* result, unsigned size) {
  int factor = 42;
 
  // No data scoping is specified
  #pragma omp parallel for
  for (int i = 0; i < size; i++) {
    result[i] = factor * i;
  }
}
