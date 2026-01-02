#include <stdio.h>
int main() {
    int N;
    int n = 1;
    scanf("%d", &N);
    while (N > 0) {
        n *= N;
        N--;
    }
    if (n == 0) printf("%d", 1);
    else printf("%d", n);
}