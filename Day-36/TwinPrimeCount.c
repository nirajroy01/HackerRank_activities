#include <stdio.h>

int checkprime(int x);

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    int n;
    scanf("%d", &n);
    
    int count = 0;
    
    for(int i=2; i<=n-2; i++){
        if(checkprime(i) && checkprime(i+2)) count++;
    }
    
   printf("%d", count);
    return 0;
}

int checkprime(int x){
    for(int i=2; i*i<=x; i++){
        if(x%i == 0) return 0;
    }
    return 1;
}