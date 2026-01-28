#include <stdio.h>

int main() {
	// 256 = 245 + 2 + 4 + 5
	// 어떤 수를 받았을 때, 그 수가 어떤수를쪼갠것과의합
	// 300
	int N[7];
	int num, a, i, j;
	int copy;
	int ori, temp, check = 0;

	scanf("%d", &ori);
	
	for (int num = 1; num < ori; num++) {
		i = 0;
		a = 1000000;
		copy = num;
		temp = num;
		
		for (j = 0; j < 7; j++) N[j] = 0;

		while (a > 0) {
			if (temp / a > 0) {
				N[i] = temp / a;
				temp %= a;
				i++;
			}
			a /= 10;
		}

		if (i != 0) {
			while (i > 0) {
				copy += N[i - 1];
				i--;
			}
		}
		

		if (ori == copy) {
			printf("%d", num);
			check++;
		}
		if (check == 1) num = ori;
	}
	if (check == 0) printf("0");

}

