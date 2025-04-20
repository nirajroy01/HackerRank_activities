#include <stdio.h>
#include<math.h>

int is_kaprekar(int n) {
    // Implement logic here
    if(n == 1) return 1;
    
    long long square = n * n;
    int digits = log10(n) + 1;
    long long div = pow(10, digits);
    
    long long left = square / div;
    long long right = square % div;
    
    if((left + right) == n) return 1;
    return 0;
}

int main() {
    int n;
    scanf("%d", &n);
    printf("%d\n", is_kaprekar(n));
    return 0;
}