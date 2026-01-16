#include <stdio.h>

long long A, B;
long long function(long long a, long long b);

int main() {
		
	scanf("%lld %lld", &A, &B);
	printf("%lld",function(A, B));
	
	return 0;
}

long long function(long long a, long long b) {
	return (a + b) * (a - b);
}