// PWR032: Avoid calls to mathematical functions with higher precision than required
// https://www.codee.com/catalog/pwr032

#include <math.h>

void example(float x) {
 float res = sin(x);
}
