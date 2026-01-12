#include <stdio.h>
#include <string.h>

int main() {
	char c[100] = { 0 };
	int len = 0;
	scanf("%s", &c);
	for (int i = 0; i < 100; i++) {
		if (c[i] == 'A') c[i] = 'a';
		else if (c[i] == 'a') c[i] = 'A';

		if (c[i] == 'B') c[i] = 'b';
		else if (c[i] == 'b') c[i] = 'B';
		
		if (c[i] == 'C') c[i] = 'c';
		else if (c[i] == 'c') c[i] = 'C';
		
		if (c[i] == 'D') c[i] = 'd';
		else if (c[i] == 'd') c[i] = 'D';
		
		if (c[i] == 'E') c[i] = 'e';
		else if (c[i] == 'e') c[i] = 'E';
		
		if (c[i] == 'F') c[i] = 'f';
		else if (c[i] == 'f') c[i] = 'F';
		
		if (c[i] == 'G') c[i] = 'g';
		else if (c[i] == 'g') c[i] = 'G';
		
		if (c[i] == 'H') c[i] = 'h';
		else if (c[i] == 'h') c[i] = 'H';
		
		if (c[i] == 'I') c[i] = 'i';
		else if (c[i] == 'i') c[i] = 'I';
		
		if (c[i] == 'J') c[i] = 'j';
		else if (c[i] == 'j') c[i] = 'J';
		
		if (c[i] == 'K') c[i] = 'k';
		else if (c[i] == 'k') c[i] = 'K';
		
		if (c[i] == 'L') c[i] = 'l';
		else if (c[i] == 'l') c[i] = 'L';
		
		if (c[i] == 'M') c[i] = 'm';
		else if (c[i] == 'm') c[i] = 'M';
		
		if (c[i] == 'N') c[i] = 'n';
		else if (c[i] == 'n') c[i] = 'N';
		
		if (c[i] == 'O') c[i] = 'o';
		else if (c[i] == 'o') c[i] = 'O';

		if (c[i] == 'P') c[i] = 'p';
		else if (c[i] == 'p') c[i] = 'P';
		
		if (c[i] == 'Q') c[i] = 'q';
		else if (c[i] == 'q') c[i] = 'Q';
		
		if (c[i] == 'R') c[i] = 'r';
		else if (c[i] == 'r') c[i] = 'R';
		
		if (c[i] == 'S') c[i] = 's';
		else if (c[i] == 's') c[i] = 'S';

		if (c[i] == 'T') c[i] = 't';
		else if (c[i] == 't') c[i] = 'T';
		
		if (c[i] == 'U') c[i] = 'u';
		else if (c[i] == 'u') c[i] = 'U';
		
		if (c[i] == 'V') c[i] = 'v';
		else if (c[i] == 'v') c[i] = 'V';
		
		if (c[i] == 'W') c[i] = 'w';
		else if (c[i] == 'w') c[i] = 'W';
		
		if (c[i] == 'X') c[i] = 'x';
		else if (c[i] == 'x') c[i] = 'X';
		
		if (c[i] == 'Y') c[i] = 'y';
		else if (c[i] == 'y') c[i] = 'Y';

		if (c[i] == 'Z') c[i] = 'z';
		else if (c[i] == 'z') c[i] = 'Z';

		if (c[i]!=0) printf("%c", c[i]);

	}
	
}