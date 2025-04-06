#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int n;
    scanf("%d", &n);
    for(int i=1; i<=n; i++){
        int a,b;
        scanf("%d %d", &a,&b);
        if((a-b+1)>=0 && (a-b+1)%9 == 0) printf("Yes\n");
        else printf("No\n");
    }
    return 0;
}
