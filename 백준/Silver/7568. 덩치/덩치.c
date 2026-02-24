#include <stdio.h>


int main() {
	int N;
	int array[51][3] = { 0 };
	scanf("%d", &N);
	//그니까, 인원수만큼 반복문 돌리라는 것 아잉교
	for (int i = 0; i < N; i++) {
		scanf("%d %d", &array[i][0], &array[i][1]);
		array[i][2]++;
	}
	for (int i = 0; i < N; i++) {
		for (int j = i+1; j < N; j++) {
			if (array[i][0] > array[j][0] && array[i][1] > array[j][1]) array[j][2]++;
			else if (array[i][0] < array[j][0] && array[i][1] < array[j][1]) array[i][2]++;
		
		}
	}

	for (int i = 0; i < N; i++) printf("%d ", array[i][2]);
}

