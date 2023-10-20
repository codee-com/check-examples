// PWR048: Replace multiplication/addition combo with an explicit call to fused multiply-add
// https://www.codee.com/catalog/pwr048
double calc_fma(double a, double b, double c) {
    return a + b * c;
}
