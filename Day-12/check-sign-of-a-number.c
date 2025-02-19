#include <stdio.h>

int main() {

    
    int n,x;
    scanf("%d", &n);
    
    x = n >>= 31;
    x = n & 1;
    
    if(x){
        printf("Negative");
    }
    else{
        printf("Positive");
    }
    return 0;
}