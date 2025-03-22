#include <stdio.h>
int main(){        
    long int n;
    scanf("%ld", &n);
    
    long int fact = 1;
    
    int i;
    for(i=1; i<=n; i++){
        fact = fact * i;
        if(n == fact) printf("%d", i);
        if(fact >= n){
            break;
        }
    }
    
    if(n != fact){
        printf("NO");
    }
    
    
    return 0;
}