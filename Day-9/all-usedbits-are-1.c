#include <stdio.h>

int main() {

    int n;
    scanf("%d", &n);
    int n1 = (n >> 1);
    
    if(n == 0){
        printf("No");
    }
    else{
         n = n & n1;
        if(n == n1){
            printf("Yes");
        }
        else{
            printf("No");
        }
    }
    
   
    
    return 0;
}