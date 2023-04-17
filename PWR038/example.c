// PWR038: Apply loop sectioning to improve performance
// https://www.codee.com/knowledge/checks/pwr038

void matvec(const double *restrict *restrict mat, const double *restrict vec,
            int rows, int cols, double *restrict result) {
  for (int i = 0; i < rows; i++) {
    result[i] = 0;
    for (int j = 0; j < cols; j++)
      result[i] += mat[i][j] * vec[j];
  }
}
