// PWD007: Unprotected multithreading recurrence
// https://www.appentra.com/knowledge/checks/pwd007

void foo() {
    int x[5], y[5];

    y[0] = 0;
    #pragma omp parallel for
    for (int i=1; i<5; i++) {
        y[i] = y[i-1] + x[i-1];
    }
}
