// OPP002: SIMD Opportunity
// https://www.codee.com/knowledge/opp002/
// Forall pattern
// https://www.codee.com/knowledge/patterns/forall/

void example(double *D, double *X, double *Y, int n, double a) {
  for (int i = 0; i < n; ++i) {
    D[i] = a * X[i] + Y[i];
  }
}
