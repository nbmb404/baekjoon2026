#include <stdio.h>
int main() {
	int array[100][100] = { 0 };
	int t, h, w, n, cut = 1;
	scanf("%d", &t);

	while (t > 0) {
		t--;
		h = 0;	w = 0;	n = 0;	cut = 1;
		scanf("%d %d %d", &h, &w, &n);
		
		for (int i = 1; i <= h; i++) {
			for (int j = 1; j <= w; j++) {
				array[i][j] = (i*100) + j;
			}
		}
		while (n > h) {
			n -= h;
			cut++;
		}
		
		printf("%d\n", array[n][cut]);
		
	}
}

