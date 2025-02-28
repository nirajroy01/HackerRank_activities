#include <stdio.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int n,f = 0;
    scanf("%d", &n);
    
    for(int i = n; i >= 1; i--){
        if(n % i == 0 && i == n){
            printf("%d", i);
        }
        else if(n % i == 0){
            if(f == 1){
                printf(" %d", i);
                f = 0;
            }
        else f = 1;
        }
    }
    printf(".");
    return 0;
}