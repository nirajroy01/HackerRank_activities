#include <stdio.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int n;
    scanf("%d", &n);
    
    int a = n;
    int rem = 0;
    int x = 1;
    int num = 0;
    
    while(a!=0){
        rem = a%2;
        a = a/2;
        
        num = num + (rem * x);
        x = x * 10;
    }
    
    printf("Binary equivalent of %d:", n);
    printf(" %d", num);
    
    
    return 0;
}