#include <stdio.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int n;
    scanf("%d", &n);
    
     n = n & 3;
     
    switch(n){
        case 0: printf("Yes");
            break;
        default: printf("No");
    }
    
    return 0;
}