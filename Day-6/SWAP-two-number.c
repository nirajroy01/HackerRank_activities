#include <stdio.h>

int main() {

    int n1,n2;
    scanf("%d %d", &n1 , &n2);
    
    n1 = n1 ^ n2;
    n2 = n1 ^ n2;
    n1 = n1 ^ n2;
    
    printf("%d\n", n1);
    printf("%d", n2);
    
    return 0;
}