// PWR045: Replace division with a multiplication with a reciprocal
// https://www.codee.com/knowledge/pwr045
void calc_div_recip(float *out, float *in, int n, float b) {
  for (int i = 0; i < n; ++i) {
    out[i] = in[i] / b;
  }
}
