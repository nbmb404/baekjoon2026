#include <stdio.h>
int main(){
    long a, b, c;
    scanf("%ld %ld", &a, &b);
    c = a-b;
    if (a-b<0) c *=-1; 
    printf("%ld", c);
}