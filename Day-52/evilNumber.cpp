#include <iostream>
using namespace std;

int is_evil_number(int n) {
    // Your code here to count 1s in binary
    int count = 0;
    int res = 0;
    
    if(n == 0) return 0;
    while(n!=0){
        res = n & 1;
        n = (n >> 1);
        if(res == 1){
            count++;
        }
    }
    if(count % 2 == 0){
        return 1;
    }
    return 0;
}

int main() {
    int n;
    scanf("%d", &n); 
    printf("%d\n", is_evil_number(n));
    return 0;
}