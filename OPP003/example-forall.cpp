// OPP003: Offloading Opportunity
// https://www.codee.com/knowledge/opp003/
// Forall pattern
// https://www.codee.com/knowledge/patterns/forall/

void example(double *D, double *X, double *Y, int n, double a) {
  for (int i = 0; i < n; ++i) {
    D[i] = a * X[i] + Y[i];
  }
}
