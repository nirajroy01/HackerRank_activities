#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int size;
    scanf("%d", &size);
    int a[size];
    int flag = 0;
    for(int i=0; i<size; i++){
        scanf("%d", &a[i]);
    }
    
    for(int i=0; i<size-1; i++){
       if(a[i] > a[i+1]){
           flag = 1;
           break;
       }
    }
    
    if(flag == 1 ) printf("Not Sorted");
    else printf("Sorted");
    return 0;
}
