#include <stdio.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    int n;
    scanf("%d", &n);
    
    if(n < 2){
        printf("Shape Not Possible");
    }
    else{
        for(int i = 1; i <= n; i++){
            for(int j = 1; j <= i; j++){
                if(j==1 || j==i){
                    printf("*");
                }
                else{
                    printf(" ");
                }
            }
             printf("\n");
        } 
        
        for(int i = n-1; i >= 1; i--){
            for(int j = 1; j <= i; j++){
                if(j==1 || j==i){
                    printf("*");
                }
                else{
                    printf(" ");
                }
            }
             printf("\n");
        } 
        
        
    }
    return 0;
}