#include <stdio.h>

int main() {
    int r,c;
    scanf("%d %d",&r,&c);
    int arr[r][c];
    int count=0;
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            scanf("%d",&arr[i][j]);
        }
    }
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            int rowMin=1;
            int colMax=1;
            for(int k=0;k<c;k++){
                if(arr[i][k] < arr[i][j])
                    rowMin=0;
            }
            for(int k=0;k<r;k++){
                if(arr[k][j] > arr[i][j])
                    colMax=0;
            }
            if(rowMin && colMax)
                count++;
        }
    }

    printf("%d",count);

    return 0;
}
