// PWR014: Out-of-dimension-bounds array access
// https://www.appentra.com/knowledge/checks/pwr014

void foo() {
    int A[100][100];
    for (int i = 1; i < 100; ++i) {
        for (int j = 0; j < 100; ++j) {
            A[i][j - 1] = 1;
        }
    }
}
