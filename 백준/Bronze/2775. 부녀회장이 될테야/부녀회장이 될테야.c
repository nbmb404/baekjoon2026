#include <stdio.h>

int main() {
	// a층의 b호 -> 아래층부터 b호까지의 인원

	int T, k, n;
	scanf("%d", &T);
	
	while (T > 0) {
		
		scanf("%d %d", &k, &n);
		int array[15][15] = { 0 };
		// j를 1부터 시작할 거라서, 여유있게 15 15 로 잡아둠

		for (int i = 0; i <= k; i++) {
			
			for (int j = 1; j <= n; j++) {
				if (i == 0) array[i][j] = j;
				else {
					for (int sum = 1; sum <= j; sum++) {
						array[i][j] += array[i - 1][sum];
					}
					
				}
			}
		}

		printf("%d\n", array[k][n]);
		T--;
	}
}