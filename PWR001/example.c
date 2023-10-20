// PWR001: Declare global variables as function parameters
// https://www.codee.com/catalog/pwr001

#define N 100
int A[N];
int B[N];
 
void init() {
  for (int i = 0; i < N; i++) {
    A[i] = i;
  }
}
 
void add() {
  for (int i = 0; i < N; i++) {
    B[i] = A[i] + 1;
  }
}
 
void example() {
  init();
  add();
}
