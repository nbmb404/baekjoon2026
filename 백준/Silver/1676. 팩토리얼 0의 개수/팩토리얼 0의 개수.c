#include <stdio.h>


int main() {
	int N, count = 0;
	scanf("%d", &N);

	while (N>1) {
		int temp = N;
		while (temp > 0 && temp % 5 == 0) {
			count++;
			temp /= 5; // 5를 나누면서 계속 5를 카운트
		}
		N--;
	}

	printf("%d", count);


}

