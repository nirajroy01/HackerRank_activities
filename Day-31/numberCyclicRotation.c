#include <stdio.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int n;
    scanf("%d", &n);
    
    int temp = n;
    int count = 0;
    
    while(temp != 0){
        temp = temp/10;
        count++;
    }
    temp = n;
    for(int i=1; i<=count; i++){
        int digit = temp % 10;
        temp = temp / 10;
        for(int i=1; i<=count-1; i++){
            digit = digit * 10;
        }
        temp = digit + temp;
        printf("%d\n", temp);
    }
    return 0;
}