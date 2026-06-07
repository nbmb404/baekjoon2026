#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

// numbers_len은 배열 numbers의 길이입니다.
int* solution(int numbers[], size_t numbers_len) {
    int i = numbers_len;
    int* answer = (int*)malloc(sizeof(int)*i);
    i--;
    
    while (i >= 0) {
        answer[i] = numbers[i]*2;
        i--;
    }
    
    return answer;
    free(answer);
}