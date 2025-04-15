#include <stdio.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    int n;
    scanf("%d", &n);
    int a[n];
    int f[n];
    
    for(int i=0; i<n; i++){
        scanf("%d", &a[i]);
        f[i] = 0;
    }
    
    for(int i=0; i<n; i++){
        if(f[i] != -1){
            int count = 1;
            for(int j=i+1; j<n; j++){
                if(a[i] == a[j]){
                    count++;
                    f[j] = -1;
                }
            }
            f[i] = count;
        }
    }
    int index = 0;
    for(int i=0; i<n; i++){
        int max = f[0];
        if(f[i] > f[0]){
            max = f[i];
            index = i;
        }
    }
    printf("%d", a[index]);
    
    return 0;
}