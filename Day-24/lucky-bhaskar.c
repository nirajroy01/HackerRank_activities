#include <stdio.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    int amount,days;
    scanf("%d %d", &amount, &days);
    
    double a = amount;
    double b = a - ((a * 6) / 10);
    double c = a - ((a * 3) / 10);
    double min = a;
    
    if(amount >= 50.0f && days >= 0){
        int count = 0;
        int i = 1;
        while(a >= b && i <= days) {
            if(i % 2 == 0 && i % 3 == 0){
                a = a + ((a * 7) / 10);
                i += 6;
                count += 6;
                if(min > a) min = a;
            } 
            else if(i % 2 == 0){
                a = a - (a / 8);
                if(min > a) min = a;
            } 
            else if(i % 3 == 0){
                a = a - (a / 5);
                if(min > a) min = a;
            } 
            else{
                a = a - (a / 10);
                if (min > a) min = a;
            }
            i++;
            count++;
        }

        if(count == days) printf("After %d days: %.2f", count, a);
        else if(count > days){
            count = days;
            printf("After %d days: %.2f", count, a);
        } 
        else printf("Stopped early after %d days: %.2f", count, a);

        printf("\nMinimum amount held by Bhaskar: %.2f", min);

        if(a > c) printf("\nLucky Bhaskar");
        else printf("\nBetter Luck Next Time!");
    }
    return 0;
}