#include <stdio.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    for(int i=1; i<=100; i++){
       if(i % 15 == 0){
            printf("%d\n", i);
       }
    }
    return 0;
}