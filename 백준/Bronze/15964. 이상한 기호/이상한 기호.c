#include <stdio.h>

int A, B;

int main() {
		
	scanf("%d %d", &A, &B);
	printf("%d",function(A, B));
	
	return 0;
}

int function(A, B) {
	return (A + B) * (A - B);
}