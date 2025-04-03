#include <stdio.h>

int find_unique_digit_product(int n) {
    // Implement the function
    int product = 1;
    int lastdigit = 0;
    
    if(n>0){
        for(int i=1; ; i++){
            if(n == 0) break;
            int temp = n;
            int check = 1;
            lastdigit = n %10;
            n = n / 10;
            temp = temp / 10;
            while(temp!=0){
                if(lastdigit == temp%10){
                    check = 0;
                    break;
                }
                temp = temp / 10;
            }
            if(check) product = product * lastdigit;
            else product = product * 1;
        }
        return product;
    }
    else return 0;
}

int main() {
    int n;
    scanf("%d", &n);
    printf("%d\n", find_unique_digit_product(n));
    return 0;
}



