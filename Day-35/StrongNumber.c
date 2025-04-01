#include <stdio.h>

int factorial(int x){
    int fact = 1;
    for(int i=1; i<=x; i++){
        fact = fact * i;
    }
    return fact;
}

int main() {

    int n;
    scanf("%d", &n);
    
    int rem = 0;
    int temp = n;
    int sum = 0;
    int x = 0;
    
    while(temp>0){
        rem = temp % 10;
        x = factorial(rem);
        sum = sum + x;
        temp = temp / 10;
    }
    
    if(sum == n){
        printf("YES");
    }
    else printf("NO");
    
    return 0;
}