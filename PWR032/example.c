// PWR032: Avoid calls to mathematical functions with higher precision than required
// https://www.codee.com/knowledge/pwr032

#include <math.h>

void example(float x) {
 float res = sin(x);
}
