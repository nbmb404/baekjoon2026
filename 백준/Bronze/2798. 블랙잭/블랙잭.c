#include <stdio.h>

int main() {
	int array[101];
	int N, M, temp, sum = 0, check=0;
	scanf("%d %d", &N, &M);

	for (int i = 0; i < N; i++) {
		scanf("%d", &array[i]);
	}
	
	for (int i = 0; i < N; i++) {
		for (int j = i+1; j < N; j++) {
			for (int k = j+1; k < N; k++) {
				temp = array[i] + array[j] + array[k];
				if (temp > sum && temp <= M) sum = temp;
			}
		}
	}
		printf("%d", sum);
}


