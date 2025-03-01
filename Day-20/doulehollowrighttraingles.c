#include <stdio.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int n;
    scanf("%d", &n);
    
    if(n <= 1){
        printf("Shape Not Possible");
    }
    
    if(n > 1){
        for(int i = 1; i <= n; i++){
            for(int j = 1; j <= i; j++){
                if(j==1 || j==i || i==n){
                    printf("*");
                }
                else{
                    printf(" ");
                }
            }
            
            for(int k = 1; k <= 2*(n-i); k++){
                printf(" ");
            }
            
             for(int j = 1; j <= i; j++){
               if(j==1 || j==i || i==n){
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