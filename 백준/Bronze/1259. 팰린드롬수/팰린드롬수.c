#include <stdio.h>

int scan(int number[6], int odd);

int main() {
	int odd = 0;
	char string[6] = {'1', '1', '1', '1', '1', '1' };
	int number[6];
	int run = 0;

	scanf("%s", &string);

	while (string[0]!='0') {

		odd = strlen(string);

		for (int i = 0; i < 5; i++) {
			number[i] = string[i]-'0';
		}

		if (odd % 2 == 1) {
			for (int i = (odd / 2) + (odd % 2); i <= odd; i++) number[i - 1] = number[i];
			odd--;
			scan(number, odd);
			
		}

		else if (odd == 1 && number[0]!=0) {
			printf("yes");
		}

		else scan(number, odd);
		
		for (int i = 0; i < 6; i++) string[i] = '1';
		scanf("%s", &string);
		if (string == '0') break;
	}
	return 0;
}

int scan(int number[6], int odd) {
	
	int check = 0;

	for (int i = 0; i < odd/2; i++) {
		if (number[i] != number[odd - 1 -i]) check++;
	}
	// 팰린드롬이 아니라면, check는 양수가 된다

	if (check == 0) printf("yes\n");
	else printf("no\n");
}




