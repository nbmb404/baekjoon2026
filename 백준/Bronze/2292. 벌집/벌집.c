#include <stdio.h>

int main() {
	int n, i = 1, set = 7, check = 1;
	scanf("%d", &n);
	while (1) {
		if (n == 1) {
			printf("1");
			break;
		}
		else if (n <= 7) {
			printf("2");
			break;
		}
		else if (n <= set) {
			printf("%d", i+1);
			break;
		}
		i++;
		set += (5 * i) + i;
	}
	
}

