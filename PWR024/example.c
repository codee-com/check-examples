// PWR024: loop can be rewritten in OpenMP canonical form
// https://www.appentra.com/knowledge/checks/pwr024

int example(int **A, int n, int m) {
    int i, j = 0;
    for (i = 0; i < n; i++, j += m) {
        A[i][j] = i * j;
    }
}
