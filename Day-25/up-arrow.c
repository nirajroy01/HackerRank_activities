#include <stdio.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    int n;
    scanf("%d", &n);
    
    
    if(n>=3){
        
        if(n%2 != 0){
            ++n;
        }
        
    for(int i=1; i<=n; i++){
        for(int k=1; k<=((n/2-1)-i+1); k++){
            printf(" ");
        }
        
        for(int j=1; j<=2*i-1; j++){
            if(i<=n/2){
                if(j==1 || j==i || j==2*i-1) printf("*");
                else printf(" ");
            }
            if((i>n/2)){
                if((j==n/2)) printf("*");
                else printf(" ");
            }
        }
        printf("\n");
    }
    }
    else printf("Shape Not Possible");
    return 0;
}