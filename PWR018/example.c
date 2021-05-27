// PWR018: Call to recursive function within a loop may inhibit vectorization
// https://www.appentra.com/knowledge/checks/pwr018

double fib(unsigned n) {
    if (n == 0) {
        return 0.;
    }
    if (n == 1) {
        return 1.;
    }
    return fib(n - 1) + fib(n - 2);
}

int example(unsigned times) {
    double sum = 0.;
    for (unsigned i = 0; i < times; i++) {
        sum += fib(i);
    }
    return sum;
}
