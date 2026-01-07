#include <stdio.h>
#include <stdlib.h>
int main() {
    int N, v, k, num = 0;
    scanf("%d", &N);
    int A[100] = { 101 };
    for (int i = 0; i < N; i++) {
        scanf("%d ", &k);
        A[i] = k;
    }
    scanf("%d", &v);
    for (int i = 0; i < N; i++) if (A[i] == v) num++;
    printf("%d", num);
    return 0;
}