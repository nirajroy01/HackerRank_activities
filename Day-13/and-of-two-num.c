#include <stdio.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    int a,b,n;
    scanf("%d %d", &a, &b);
    
    n = (a^b) ^ (a|b);
    printf("%d", n);
    return 0;
}