#include <stdio.h>

int main() {
	int a;
	char b[51];
	long long sum = 0;
	long long r = 1;
	long long M = 1234567891;
	scanf("%d %s", &a, &b);

	for (int i = 0; i < a; i++) {
		long long num = b[i] - 'a' + 1;
		sum = (sum + (num * r)) % M;
		r = (r * 31) % M;
	}
	printf("%lld\n", sum);
	return 0;
}