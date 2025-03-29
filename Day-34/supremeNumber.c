#include <stdio.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    int n;
    scanf("%d", &n);
    
    int sum = 0;
    int rem = 0;
    int is_prime = 1;
    if(n==0) printf("NO");
    if(n==1) printf("NO");
    if(n>1){
    for(int i=2; i*i<=n; i++){
        if(n%i == 0){
            printf("NO");
            is_prime = 0;
            break;
        }
    }
    
    if(is_prime == 1){
        
        while(n!=0){
       rem = n % 10;
        sum = sum + rem;
        n = n / 10;
    }
    
    int flag = 1;
    
    for(int i=2; i*i<=sum; i++){
        if(sum % i == 0){
            printf("NO");
            flag = 0;
            break;
        }
    }
    
    if(flag == 1) printf("YES");
    }
    }
    return 0;
}