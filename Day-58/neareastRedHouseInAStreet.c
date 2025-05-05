#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    int n;
    scanf("%d",&n);
    int a[n];
    double r[n];
    for(int i=0; i<n; i++){
        scanf("%d",&a[i]);
        r[i] = -1.0;
    }
    for(int i=0; i<n; i++){
        if(a[i] == -1){
            r[i] = -1;
        }
        else if(a[i] == 1){
            r[i] = 0.0;
        }
        else{
            double count = 0.0;
            for(int j=i; j<n; j++){
                
                if(a[j] == -1){
                    r[i] = -1.0;
                    break;
                }
                else if(a[j] == 0){
                    count += 1.0;
                }
                else if(a[j] == 2){
                    count += 0.5;
                }
                else{
                    r[i] = count;
                    break;
                }
            }
        }
    }
    
    for(int i=n-1; i>=0; i--){
        if(a[i] == -1){
            r[i] = -1;
        }
        else if(a[i] == 1){
            r[i] = 0.0;
        }
        else{
            double count = 0.0;
            for(int j=i; j>=0; j--){
                
                if(a[j] == -1){
                    if(r[i] == -1){
                        r[i] = -1.0;
                    }
                    break;
                }
                else if(a[j] == 0){
                    count += 1.0;
                }
                else if(a[j] == 2){
                    count += 0.5;
                }
                else{
                    if(r[i] == -1){
                        r[i] = count;
                    }
                    else{
                        if(r[i] > count){
                            r[i] = count;
                        }
                    }
                    break;
                }
            }
        }
    }
    
    for(int i=0; i<n; i++){
        printf("%.1f ",r[i]);
    }
    
    return 0;
}