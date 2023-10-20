// PWR019: Consider interchanging loops to favor vectorization by maximizing inner loop's trip count
// https://www.codee.com/catalog/pwr019

void example(int **A) {
    for (int i = 0; i < 300; i++) {
        for (int j = 0; j < 10; j++) {
            A[i][j] = 0;
        }
    }
}
