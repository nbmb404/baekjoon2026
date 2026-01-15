#include <stdio.h>

int main() {

	char c[1001] = { NULL };
	int i, j, k;
	char t;
	scanf("%d", &k);
	for (i = 0; i < k; i++) {
		scanf("%s", &c);
		t = strlen(c);
		printf("%c%c\n", c[0], c[t-1]);
		for (j = 0; j < t; j++) c[j] = NULL;
	}
	return 0;
}