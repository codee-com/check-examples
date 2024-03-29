// PWR023: add ‘restrict’ for pointer function parameters to hint the compiler that vectorization is safe
// https://www.codee.com/catalog/pwr023

int example(int *x, int *y) {
    int sum = 0;
    for (int i = 0; i < 10; ++i) {
        sum += x[i];
        y[i] = 2;
    }
    return sum;
}
