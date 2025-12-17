#include <stdio.h>

int T = 0; N = 0; result[41] = { 0, 1 };

// for문과 함께 사용될 함수만 메인에 넣고, 나머지는 위로 빼는 게 깔끔하다

int main() {

	for (int i = 2; i<41; i++) result[i] = result[i - 1] + result[i - 2];
	scanf("%d", &T);
	for (T; T > 0; T--) {
		scanf("%d", &N);
		if (N > 40 || N < 0) return 0;
		if (N == 0) printf("1 0\n");
		else printf("%d %d\n", result[N-1], result[N]);
	}
	return 0;
}
