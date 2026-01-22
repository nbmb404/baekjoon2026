#include <stdio.h>
int main() {
	int array[9] = { 0 };
	int ascending = 0;
	int descending = 0;

	for (int i = 0; i < 8; i++) scanf("%d", &array[i]);	
	
	for (int i = 0; i < 8; i++) {
		if (array[i] == i + 1) ascending++;
		else if (array[i] == 8 - i) descending++;
	}
	if (ascending == 8) printf("ascending");
	else if (descending == 8) printf("descending");
	else printf("mixed");

}

