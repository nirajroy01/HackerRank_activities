#include <stdio.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
     int a,b,y;
    scanf("%d %d", &a, &b);
    
    int n = a - b;
    n >>= 31;
     
    y = (b & n) | (a & (~n));
    
    printf("%d", y);
    
    return 0;
}