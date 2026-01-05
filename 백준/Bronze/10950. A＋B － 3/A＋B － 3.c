#include <stdio.h>
#include <stdlib.h>
int main() {
    int a, i;
    scanf("%d", &a);
    int *b = (int*)malloc(sizeof(int) * a);
    int *c = (int*)malloc(sizeof(int) * a);
    for (i = 0; i < a; i++) {
        b[i] = i;
        c[i] = i;
    }
    for (i = 0; i < a; i++) {
        scanf("%d %d", &b[i], &c[i]);
    }
    for (i = 0; i < a; i++) {
        printf("%d\n", b[i] + c[i]);
    }
    free(b);
    free(c);

    return 0;
}