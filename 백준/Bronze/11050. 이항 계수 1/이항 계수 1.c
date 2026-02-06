#include <stdio.h>

int factorial(int N);

int main() {
	
	int N, K, a, b;
	scanf("%d %d", &N, &K);

	a = factorial(N);
	b = factorial(K) * factorial(N - K);
	printf("%d", a / b);
}

int factorial(int N) {
	if (N <= 1) return 1;
	return N * factorial(N - 1);
}




