#include <stdio.h>
int main(){
    int N, i=1, j;
    scanf("%d", &N);
    while(i<=N){
        for(j=0; j<i; j++) printf("*");
        printf("\n");
        i++;
    }
    return 0;
}