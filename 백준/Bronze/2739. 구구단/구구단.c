#include <stdio.h>
int main(){
    int N, i=1;
    scanf("%d", &N);
    while(i<10){
        printf("%d * %d = %d\n", N, i, i*N);
        i++;
    }
}