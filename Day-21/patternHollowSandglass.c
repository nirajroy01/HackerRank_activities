#include <stdio.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int n;
    scanf("%d", &n);
    
    if(n < 2){
        printf("Shape Not Possible");
    }
    
    for(int i = 1; i <= n; i++){
        for(int k = 1; k <= (i-1); k++){
            printf(" ");
        }
        
        for(int j = 1; j <= (n-i+1); j++){
            if(i==1 || j==1 || j==(n-i+1)){
                printf("* ");
            }
            else{
                printf("  ");
            }
        }
        printf("\n");
    }
    
    
    for(int i = 2; i <= n; i++){
        for(int k =1; k <= (n-i); k++){
            printf(" ");
        }
        
        for(int j = 1; j <= i; j++){
           if(i==2 || i==n || j==i || j==1){
               printf("* ");
           }
           else{
                printf("  ");
            }
        }
        printf("\n");
    }
    return 0;
}