#include <stdio.h>

int main() {
    int a,b;
    scanf("%d %d",&a,&b);
    int arr[a][b];
    for(int i=0;i<a;i++){
        for(int j=0;j<b;j++){
            scanf("%d",&arr[i][j]);
        }
    }
    for(int i=0;i<a;i++){
        for(int j=0;j<b;j++){
            for(int k=i;k<a;k++){
                for(int l=0;l<b;l++){
                if((i!=k || j!=l) && arr[i][j]==arr[k][l]){
                printf("%d",arr[i][j]);
                return 0;
                }
                }
            }
        }
    }
    return 0;
}
