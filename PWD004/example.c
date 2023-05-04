// PWD004: Out-of-memory-bounds array access
// https://www.codee.com/knowledge/pwd004

void foo() {
    int A[100];
    for (int i = 0; i < 100; i++) {
        A[i + 1] = 1;
    }
}
