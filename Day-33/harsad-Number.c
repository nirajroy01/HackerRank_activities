#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    int n;
    scanf("%d", &n);
    int temp = n;
    int rem = 0;
    int sum = 0;
    
    while(n!=0){
        rem = n % 10;
        sum = sum + rem;
        n = n / 10;
    }
    
    if(temp % sum == 0) printf("%d is a harshad number", temp);
    else printf("%d is not a harshad number", temp);
    return 0;
}
