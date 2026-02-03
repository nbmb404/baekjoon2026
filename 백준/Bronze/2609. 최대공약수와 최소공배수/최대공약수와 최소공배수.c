#include <stdio.h>

int main() {
	
	int a, b, small, num = 0, count = 0;
	scanf("%d %d", &a, &b);

	if (a >= b) small = b;
	else small = a;

	while (small>0) {
		small--;
		count++;
		if (a % count == 0 && b % count == 0) num = count;
	}
	
	printf("%d\n%d", num, a*b/num);

}





