#include <stdio.h>

int main() {
	int p, sum = 0;
	char array[14] = { 0 };
	scanf("%s", array);
	
	for (int i = 0; i < 14; i++) if (array[i]!='*') array[i] -= 48;
	

	for (int i = 1; i < 13; i++) {
		
		if (array[i - 1] == '*') {
			p = i;
			array[i - 1] = 0; // sum 더할 때 착오 없게끔
		}

		else if (i % 2 == 0) array[i - 1] *= 3;
		sum += array[i - 1];

	}

	sum += array[12];

	if (p % 2 == 0) {
		for (int i = 0; i < 10; i++) {
			if ((sum + (i * 3)) % 10 == 0) printf("%d", i);	
		}
	}
	else {
		for (int i = 1; i < 10; i++) {
			if ((sum + i) % 10 == 0) printf("%d", i);
		
		}
	}

	return 0;
}