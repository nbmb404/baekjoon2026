#include <stdio.h>

int main () {
    int N;
    int i, temp, check, cnt = 1;
    scanf("%d", &N);
    if (N == 1)
    {
        printf("666");
        return 0;
    }
    for (i = 667; ; i++)
    {
        temp = i;
        check = 0;
        while (temp)
        {
            if (temp % 1000 == 666) check = 1;
            temp /= 10;
        }
        if (check)
        {
            cnt ++;
            if (cnt == N) break;
        }
    }
    printf("%d", i);
    return 0;
}