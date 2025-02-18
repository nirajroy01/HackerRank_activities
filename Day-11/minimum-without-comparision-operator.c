#include <stdio.h>

int main() {

    int a,b;
    scanf("%d %d", &a, &b);
    
    int n = a - b;
    n >>= 31;
    
    switch(n){
        case 0: printf("%d", b);
            break;
        default: printf("%d", a);
            break;
    }
    return 0;
}