#include <stdio.h>

int main() {

    
    int n;
    scanf("%d", &n);
        
    n = (n << 2) + (n << 1) + (n);
    
    printf("%d", n);
    return 0;
}