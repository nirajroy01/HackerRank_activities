#include <stdio.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    
    int a,b,n;
    scanf("%d %d", &a, &b);
    
    n = a ^ b;
    
    switch(n){
        case -1: printf("YES");
            break;
        default: printf("NO");
    }
    return 0;
}