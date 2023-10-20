// PWR033: move invariant conditional out of the loop to avoid redundant computations
// https://www.codee.com/catalog/pwr033

void example(int addTwo) {
 int sum = 0;
 for (int i = 0; i < 1000; i++) {
   sum += addTwo ? 2 : 1;
 }
}

