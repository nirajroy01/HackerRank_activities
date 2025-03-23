#include <stdio.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    int n;
    scanf("%d", &n);
    
    int temp = n;
    int count = 0;
    int lastdigit = 0;
    int sum = 0;
    
    while(temp!=0){
        temp = temp / 10;
        count++;
    }
    
    temp = n;
    while(temp!=0){
        lastdigit = temp % 10;
        int power = 1;
        for(int i=0; i<count; i++ ){
            power *= lastdigit;
        }
        sum += power;
        temp = temp / 10;
    }
    
    if(sum == n) printf("YES");
    else printf("NO");
    
    return 0;
}