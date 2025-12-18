#include <stdio.h>
#include <time.h>
int main(){
    time_t t = time(NULL);
    struct tm tm = *localtime(&t);
    printf("%d-%02d-%2d", 1900+tm.tm_year, 1+tm.tm_mon, tm.tm_mday);
}
