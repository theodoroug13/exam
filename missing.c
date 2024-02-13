#include<stdio.h>
#include<stdlib.h>

void swap(int *a, int *b){
    int tmp=*a;
    *a=*b;
    *b=*a;
}

void insertionsort(int *array, int n){
    int i,j;
    for(i=1;i<n;i++){
        j=i-1;
        while(j>=0 && array[j]>array[j+1]){
            swap(&array[j+1],&array[j]);
            j--;
        }
    }

}

int missing(int *array, int n){
    insertionsort(array, n);
    for(int i=0;i<n-1;i++){
        if(array[i+1]-array[i]==2){
            return array[i]+1;
        }
    }

}


int main(){
    int n;
    scanf("%d", &n);
    int *array=malloc(n*sizeof(int));
    for(int i=0;i<n;i++){
        scanf("%d", array[i]);
    }
    printf("missing: %d\n", missing(array,n));
}