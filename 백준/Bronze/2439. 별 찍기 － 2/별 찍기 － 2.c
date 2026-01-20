#include <stdio.h>
int main() {
	int n;
	int m;
	scanf("%d", &n);
	m = n;
	while (n > 0) {
		for (int i = 1; i < n; i++) {
			printf(" ");
		}
		n--;
		for (int i = n; i < m; i++) printf("*");
		printf("\n");
	}
	
}