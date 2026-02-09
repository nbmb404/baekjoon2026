#include <stdio.h>

int main() {
	int p_num, num, sum = 0;
	char array[14] = { 0 };
	scanf("%s", array);
	
	
	for (int i = 0; i < 13; i++) {
		
		num = (i % 2 == 0) ? 1 : 3;
		//num을 곱해야 하기 때문에 1or3

		if (array[i] == '*') p_num = num;
		else sum += (array[i] - '0') * num;

	}

	for (int i = 0; i < 10; i++) if ((sum + i * p_num) % 10 == 0) printf("%d", i);

	return 0;
}