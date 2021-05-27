// PWR025: consider annotating pure function with OpenMP ‘declare simd’
// https://www.appentra.com/knowledge/checks/pwr025

int foo(int a) { return 2 * a; }

void example(int *A, int n) {
    for (int i = 0; i < n; i++) {
        A[i] = foo(i);
    }
}
