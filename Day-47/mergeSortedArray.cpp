#include <stdio.h>

void bubbleSort(int arr[], int size){
    for(int i=1; i<size; i++){
        for(int j=0; j<size-1; j++){
            if(arr[j] > arr[j+1]){
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
}

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int s1;
    scanf("%d", &s1);
    int arr1[s1];
    for(int i=0; i<s1; i++){
        scanf("%d", &arr1[i]);
    }
    
    int s2;
    scanf("%d", &s2);
    int arr2[s2];
    for(int i=0; i<s2; i++){
        scanf("%d", &arr2[i]);
    }
    
    int mergeSize = s1 + s2;
    int mergeArr[mergeSize];
    
    for(int i=0; i<s1; i++){
        mergeArr[i] = arr1[i];
    }
    
    for(int i=0; i<s2; i++){
        mergeArr[s1 + i] = arr2[i];
    }
    
    bubbleSort(mergeArr, mergeSize);
    
    for(int i=0; i<mergeSize; i++){
        printf("%d ", mergeArr[i]);
    }
    
    return 0;
}