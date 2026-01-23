#include <stdio.h>
int main() {
	int H, M;
	scanf("%d %d", &H, &M);
	M -= 45;
	// 30분 -> -45 -> 45분이 되어야 함
	// 하지만 -15분이 됨
	if (M < 0) {
		H--;
		M += 60;
	}
	if (H < 0) H += 24;
	
	printf("%d %d", H, M);
}

