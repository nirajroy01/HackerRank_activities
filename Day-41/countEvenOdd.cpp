#include <stdio.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    int size;
    scanf("%d", &size);
    int a[size];
    int even=0,odd=0;
    for(int i=0; i<size; i++){
        scanf("%d", &a[i]);
        if(a[i]%2 == 0) even++;
        else odd++;
    }
    printf("%d %d", even,odd);
    return 0;
}