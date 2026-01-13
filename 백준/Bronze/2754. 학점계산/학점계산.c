#include <stdio.h>

int main() {
    char c[3];
    float g = 4;
    scanf("%s", &c);
    if (c[0] == 'F') printf("0.0");
    else {
        for (int i = 0; i < 4; i++) {
            if (c[0] == 65 + i) {
                g -= i;
                if (c[1] == '+') g += 0.3;
                else if (c[1] == '-') g -= 0.3;
                }
            }
        printf("%.1f", g);
    }
    
    return 0;
}