#include <stdio.h>

int is_disarium_number(int n) {
    // Implement this function
    int count = 0;
    int temp = n;
    int original = n;
    int sum = 0;
    while(temp!=0){
        temp = temp/10;
        count++;
    }
    temp = n;
    int position = count;
    while(temp!=0){
        int rem = temp % 10;
        int power = 1;
        for (int j=1; j<=position; j++){
            power = power * rem;
        }
        sum = sum + power;
        temp = temp / 10;
        position--;
    }
    
    return (sum == original) ? 1 : 0;
    
}

int main() {
    int n;
    scanf("%d", &n);
    printf("%d\n", is_disarium_number(n));
    return 0;
}