#include <stdio.h>

int is_spy_number(int n) {
    // Your code here to calculate sum and product of digits
    int sum = 0;
    int product =1;
    
    while(n!=0){
        sum = sum + (n%10);
        product = product * (n%10);
        n = n/10;
    }
    
    if(product == sum) return 1;
    return 0;
}

int main() {
    int n;
    scanf("%d", &n); \
    printf("%d\n", is_spy_number(n));
    return 0;
}