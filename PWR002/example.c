// PWR002: Declare scalar variables in the smallest possible scope
// https://www.appentra.com/knowledge/checks/pwr002

void example(int* result, unsigned size) {
  int t;
 
  for (int i = 0; i < size; i++) {
    // t is a temporary variable local to the loop iteration
    t = i + 1;
    result[i] = t;
  }
}
