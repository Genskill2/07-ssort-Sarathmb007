#include <stdio.h>

void swap_max(int arr[], int l, int n ){
int max=arr[n];
int count=0;
for(int i=n;i<l;i++){
if(max<=arr[i]){
max=arr[i];
count=i;
}
}
arr[count]=arr[n];
arr[n]=max;
}

void ssort(int arr[], int l){
for(int i=0;i<l;i++){
swap_max(arr, l, i);
}
}
