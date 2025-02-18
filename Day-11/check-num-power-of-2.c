#include <stdio.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    
    int n;
    scanf("%d", &n);
    
    if(n == 0){
        printf("No");
    }
    else{
         n = n & (n-1);
         if(n == 0){
             printf("Yes");
         }
        else{
            printf("No");
        }
    }
    return 0;
}