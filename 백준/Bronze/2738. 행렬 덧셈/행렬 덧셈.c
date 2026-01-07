#include <stdio.h>
int main() {

    int a[100][100];
    int b[100][100];
    int N, M, i, j;
    scanf("%d %d", &N, &M);
    for (i = 0; i < N; i++) {
        for (j = 0; j < M; j++) {
            scanf("%d", &a[i][j]); //아니 이거 %d 뒤에 띄어쓰기 없어야 정상작동 이라고?
        }
    }
    for (i = 0; i < N; i++) {
        for (j = 0; j < M; j++) {
            scanf("%d", &b[i][j]);
        }
    }
    for (i = 0; i < N; i++) {
        for (j = 0; j < M; j++) {
            printf("%d ", a[i][j] + b[i][j]);
        }
        printf("\n");
    }


    // 첫째줄 행렬 크기 N M
    // N개의 줄에 행렬 A의 원소 M (M 3개라 했으니 3개 받음)
    // 곱하기 세줄 받음
    // N개의 줄에 행렬 B의 원소 M (M 3개라 했으니 3개 받음)
    // 곱하기 세줄 받음
    return 0;
}