// PWR022: move invariant conditional out of the loop to facilitate vectorization
// https://www.appentra.com/knowledge/checks/pwr022

int example(int *A, int n) {
    int total = 0;
    for (int i = 0; i < n; i++) {
        if (n < 10) {
            total++;
        }
        A[i] = total;
    }
    return total;
}
