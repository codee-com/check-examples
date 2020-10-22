// PWD008: Unprotected multithreading recurrence due to
// out-of-dimension-bounds array access
// https://www.appentra.com/knowledge/checks/pwd008

void foo() {
    int A[5][5];

    #pragma omp parallel for
    for (int i = 1; i < 5; ++i) {
        for (int j = 0; j < 5; ++j) {
            A[i][j] += A[i][j-1];
        }
    }
}
