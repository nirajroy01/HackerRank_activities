#include <stdio.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    int n;
    scanf("%d", &n);
    
    if(n <= 2){
        printf("Shape Not Possible");
    }
    
    if(n > 2){
        for(int i = 1; i <= n; i++){
            for(int j = 1; j <= n; j++){
                if(i == 1 || i == n || j == 1 || j == n){
                    printf("*");
                }
                else{
                    printf("#");
                }
            }
            printf("\n");
        }
    }
    return 0;
}