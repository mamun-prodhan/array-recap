#include<stdio.h>

int main(){

    int n;
    scanf("%d", &n);

    int a[n];
    
    for(int i=0; i<n; i++){
        scanf("%d",&a[i]);
    }

    int max = a[0];
    int maxIndex= 0, minIndex = 0;
    int min = a[0];

    for(int i=0; i<n; i++){
        if(max < a[i]){
            max = a[i];
            maxIndex = i;
        }
        if(min > a[i]){
            min = a[i];
            minIndex = i;
        }
    }

    int temp = a[minIndex];
    a[minIndex] = a[maxIndex];
    a[maxIndex] = temp;

    for(int i=0; i<n; i++){
        printf("%d ",a[i]);
    }

    return 0;
}