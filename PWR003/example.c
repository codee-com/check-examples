// PWR003: Explicitly declare pure functions
// https://www.appentra.com/knowledge/checks/pwr003

#ifdef __GNUC__
  #define PURE __attribute__((const))
#else
  #define PURE
#endif
 
/*PURE*/ int pure_func(int a, int b) {
  return a + b;
}
 
int impure_func(int a, int *b) {
  *b = a + 1;
  return a + *b;
}
 
void example() {
  int result[10];
  int b = 1;
 
  for (int i = 0; i < 10; i++) {
    result[i] = pure_func(i, b);   // No side effects
  }
 
  for (int i = 0; i < 10; i++) {
    result[i] = impure_func(i, &b);  // Side effects on variable t
  }
}
