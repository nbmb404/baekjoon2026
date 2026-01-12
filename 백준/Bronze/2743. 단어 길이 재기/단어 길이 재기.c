#include <stdio.h>

int main() {
	char c[100] = { 0 };
	int len = 0;
	scanf("%s", &c);
	for (int i = 0; i < 100; i++) if (c[i] != 0) len++;
	printf("%d", len);
}