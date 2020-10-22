// PWD004: Out-of-memory-bounds array access
// https://www.appentra.com/knowledge/checks/pwd004

void foo() {
    int A[100];
    for (int i = 0; i < 100; i++) {
        A[i + 1] = 1;
    }
}
