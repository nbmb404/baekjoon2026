#include <stdio.h>
int main() {
	long long a = 1;
	long long b = 0;
	int array[11] = { 0 };
	int count[11] = { 0 };
	long long ten = 10000000000; // 일부러 1,000,000,000 * 10 설정
	int check = 0;

	for (int i = 0; i < 3; i++) {
		scanf("%lld", &b);
		a *= b;
	}
	

	for (int i = 0; i < 10; i++) {
		ten /= 10;
		while (a - ten >= 0) {
			if (check == 0) {
				for (int j = 0; j < i; j++) array[j] = 10; // 0 중복카운트 방지
				check++;
			}
			a -= ten;
			array[i]++;
		}
	}

	
	for (int i = 0; i < 10; i++) {
		if (array[i] != 10) {
			for (int j = 0; j < 10; j++) if (j == array[i]) count[j]++;
		}		
	}

	for (int i = 0; i < 10; i++) printf("%d\n", count[i]);
	
}