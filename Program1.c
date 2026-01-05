#include <stdio.h>
int main() {
    int arr[]={6,9,2,4,6,7,4,4,6,8};
    int size=sizeof(arr)/sizeof(arr[0]);
    for(int i=0;i<size;i++){
       int num=arr[i];
       for(int j=i+1;j<size;j++){
           if(arr[j]==num){
               for(int k=j; k<size-1;k++){
                  arr[k]=arr[k+1];
               }
               size--;
               j--;
           }
       }
    }
    printf("The New array with no duplicate value is:\n");
    for(int i=0;i<size;i++)
        printf("%d ",arr[i]);

    return 0;
}