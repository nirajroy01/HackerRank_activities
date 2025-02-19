#include <stdio.h>

int main() {

    int a,b,n;
    scanf("%d %d", &a, &b);
    
    n = a ^ b;
    n >>= 31;
    if(n) printf("Yes");
    else  printf("No");
    return 0;
}