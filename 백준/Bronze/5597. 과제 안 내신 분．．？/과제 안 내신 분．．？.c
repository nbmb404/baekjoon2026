#include <stdio.h>
int main() {
    int a[30] = { 0 };
    int i, b;
    for (i = 0; i < 30; i++) {
        a[i] = i+1;
    }
    for (i = 0; i < 28; i++) {
        scanf("%d", &b);
        a[b-1] = 0;
    }
    for (i = 0; i < 30; i++) if (a[i] != 0) printf("%d\n", a[i]);
    return 0;
}