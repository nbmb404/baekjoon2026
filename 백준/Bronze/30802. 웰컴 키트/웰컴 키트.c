#include <stdio.h>

int main() {
	//티셔츠는 남아도 되지만 부족하면 안 됨
	// T장 묶음
	//펜은 남거나 부족하면 안됨
	// 티셔츠는 최소 t장씩 n묶음
	// 펜은 최대 P자루씩 n묶음
	int N, T, P, size[7] = { 0 };
	int a= 0, b=0;
	scanf("%d", &N);
	for(int i = 0; i < 6; i++) scanf("%d", &size[i]);
	scanf("%d %d", &T, &P);
	for (int i = 0; i < 6; i++) {
		if (size[i] % T > 0) a++;
		if (size[i] != 1) a += size[i] / T;
	}
	printf("%d\n", a);
	printf("%d %d", N / P, N % P);

}

