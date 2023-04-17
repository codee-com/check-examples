// PWR016: Use separate arrays instead of an Array-of-Structs
// https://www.codee.com/knowledge/checks/pwr016

typedef struct {
    int x;
    int y;
    int z;
} point;

void foo() {
    point points[1000];
    for (int i = 0; i < 1000; i ++) {
        points[i].x = 1;
        points[i].y = 1;
    }
}
