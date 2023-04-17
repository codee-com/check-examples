// PWR024: loop can be rewritten in OpenMP canonical form
// https://www.codee.com/knowledge/checks/pwr024

int example(int *A, int n, int m) {
    int i = 0;
    for (; i < n; i++) {
        A[i] = m;
    }
}
