#include <stdio.h>

int main() {
	int a, b, c, temp;
	while (scanf("%d %d %d", &a, &b, &c) != EOF && a*b*c != 0) {
		a *= a;
		b *= b;
		c *= c;
		if (a > b) {
			temp = a;
			a = b;
			b = temp;
		}
		if (b > c) {
			temp = b;
			b = c;
			c = temp;
		}
		if (a > b) {
			temp = a;
			a = b;
			b = temp;
		}
	
		if (a + b == c) printf("right\n");
		else printf("wrong\n");
	}
	
}

