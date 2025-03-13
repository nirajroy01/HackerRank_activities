#include <stdio.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    int n;
    scanf("%d", &n);
    
   
    
    for(int i=1; i<=n; i++){
        
        for(int k=1; k<=n-i; k++){
            printf(" ");
        }
        
        int a = i;
        for(int j=1; j<=2*i-1; j++){
            if(j<=i){
                --a;
                printf("%d", a);
            }
            else{
                ++a;
                printf("%d", a);
            }
        }
        printf("\n");
    }
    return 0;
}