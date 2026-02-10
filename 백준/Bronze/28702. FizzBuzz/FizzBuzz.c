#include <stdio.h>


int main() {

	char num[3][9] = { NULL };
	int integer = 0;
	int n, intarray = 0;
	int result = 0;

	for (int i = 0; i < 3; i++)
	{
		n = 1;
		scanf("%s", num[i]);


		// 입력값이 숫자일 때만 저장
		if (num[i][0] >= '1' && num[i][0] <= '9')
		{
			if (integer == 0)
			{
				for (int j = 7; j >= 0; j--)
				{
					if (num[i][j] != NULL)
					{
						integer += ((num[i][j] - '0') * n);
						n *= 10;
					}
					
				}
				intarray = i+1;
			}

		}


	}

	// result = integer + 3 - (intarray - 1)
	result = (integer + 3 - intarray + 1);
	
	// 연속된 세 개의 위치의 다음 위치 (ex; 1, 2, 3이라면 다음 위치는 4)
	// 연속된 세 개의 문자열 중 처음으로 숫자인 값 + 3 - 숫자인 값의 위치

	if (result % 3 == 0 && result % 5 == 0) printf("FizzBuzz");
	else if (result % 3 == 0 && result % 5 != 0) printf("Fizz");
	else if (result % 3 != 0 && result % 5 == 0) printf("Buzz");
	else printf("%d", result);




}




