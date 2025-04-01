#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    int n;
    scanf("%d", &n);
    
    int long square = n * n;
    int long temp = n;
    int countDigit = 0;
    
    while(temp!=0){
        temp = temp / 10;
        countDigit++;
    }
    
    int long incPower = 1;
    for(int i=1; i<=countDigit; i++){
        incPower = incPower * 10;
    }
    
    int long lastdigit = square % incPower;
    
    
    if(lastdigit == n) printf("%d is automorphic", n);
    else printf("%d is not automorphic", n);
        
    
    
    return 0;
}
