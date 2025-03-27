#include <stdio.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int n;
    scanf("%d", &n);
    
    int rem1 = 0;
    int rem2 = 0;
    int sum1 = 0;
    int sum2 = 0;
    
    int temp = n;
    
    while(n!=0){
        rem1 = n % 10;
        sum1 = sum1 + rem1;
        n = n / 10;
    }
    
    repeat:
    while(sum1!=0){
        rem2 = sum1 % 10;
        sum2 = sum2 + rem2;
        sum1 = sum1 / 10;
    }
    
    if(sum2 > 9){
        sum1 = sum2;
        sum2 = 0;
        goto repeat;
    }
    
    else{
    if(sum2==1) printf("%d is a magic number", temp);
    else printf("%d is not a magic number", temp);
    }
    return 0;
}