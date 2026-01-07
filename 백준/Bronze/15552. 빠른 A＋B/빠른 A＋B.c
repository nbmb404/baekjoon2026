#include <stdio.h>
int main() {
    int a, b, i;
    scanf("%d", &i);
    for (i; i > 0; i--) {
        scanf("%d %d", &a, &b);
        printf("%d\n", a + b);
    }

    return 0;
}