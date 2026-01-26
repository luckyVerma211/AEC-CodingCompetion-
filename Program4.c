#include <stdio.h>

int main() {
    int arr[30][30];
    int n;
    printf("Enter the size of the matrix:");
    scanf("%d",&n);
    printf("Enter the elements of the matrix!!\n");
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            printf("Enter the value at position [%d][%d]:",i+1,j+1);
            scanf("%d",&arr[i][j]);
        }
    }

    printf("\n");
    printf("The matrix entered is:\n");
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            printf("%d\t",arr[i][j]);
        }
        printf("\n");
    }
    int check=1;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(i==j && arr[i][j]==1)
                continue;
            else if(i!=j && arr[i][j]==0)
                continue;
            else
                check=0;
        }
    }

    if(check==1)
        printf("\n\nThe matrix is an Identity Matrix!!");
    else
        printf("\n\nThe matrix is not an Identity Matrix!!");
    return 0;
}