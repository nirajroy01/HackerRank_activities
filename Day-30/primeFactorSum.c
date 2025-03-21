#include <stdio.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    int n;
    scanf("%d", &n);
    
    int sum = 0;
    int i = 2;
    
    while(n!=1){
        if(n%i == 0){
            sum = sum + i;
            n = n/i;
        }
        else i++;
    }
    printf("%d", sum);
    return 0;
}