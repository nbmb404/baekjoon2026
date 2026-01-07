#include <stdio.h>
#include <stdlib.h>
int main() {
    int N, X, k;
    scanf("%d %d", &N, &X);
    int* A = (int*)malloc(sizeof(int) * N);
    for (int i = 0; i < N; i++) {
        scanf("%d", &k);
        A[i] = k;
        if (A[i] < X) printf("%d ", A[i]);
    }
    return 0;
}