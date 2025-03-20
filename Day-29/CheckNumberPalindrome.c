#include <stdio.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int n;
    scanf("%d", &n);
    
    int sum = 0;
    int rem = 0;
    int a = n;
    
    while(n!=0){
        rem = n%10;
        sum = sum * 10 + rem;
        n = n/10;
    }
    
    if(a == sum){
        printf("YES");
    }
    else {
        printf("NO");
    }
    return 0;
}