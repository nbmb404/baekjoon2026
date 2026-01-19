#include <stdio.h>
int main() {
	int a, b = 0;
	for (int i = 0; i < 5; i++) {
		scanf("%d", &a);
		b += (a * a);
	}
	printf("%d", b % 10);
}