#include <stdio.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int n;
    scanf("%d", &n);
    printf("%d", n);
    
    for(; n > 1;){
        if(n % 2 == 0){
            n = n/2;
        }
        else{
            n = 3 * n + 1;
        }
        
        printf(" -> %d", n);
    }
    return 0;
}