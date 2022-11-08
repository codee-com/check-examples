// OPP001: Multithreading Opportunity
// https://www.codee.com/knowledge/opp001/
// Recurrence pattern
// https://www.codee.com/knowledge/patterns/recurrence/

void example(double *y, double *x, int N) {
  y[0] = 0;
  for (int i = 1; i < N; i++) {
    y[i] = y[i - 1] + x[i - 1];
  }
}
