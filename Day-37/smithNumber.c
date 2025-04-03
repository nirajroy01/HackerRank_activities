#include <stdio.h>

int digitsum(int n){
    int sum = 0;
    while(n > 0){
        sum = sum + n % 10;
        n = n / 10;
    }
    return sum;
}

int is_smith_number(int n){
    // Implement this function
    int temp = n;
    int sum1 = digitsum(n);
    int factorsum = 0;
    
    int checkcomp = 0;
    for(int i = 2; i * i <= n; i++){
        if(n%i == 0) {
            checkcomp = 1;
            break;
        }
    }
    if(checkcomp == 0) return 0;
    
     for(int i=2; i<=temp; i++){
        while (temp % i == 0) {
            factorsum = factorsum + digitsum(i);
            temp = temp / i;
        }
    }
    
    return (factorsum == sum1);
}

int main() {
    int n;
    scanf("%d", &n);
    printf("%d\n", is_smith_number(n));
    return 0;
}