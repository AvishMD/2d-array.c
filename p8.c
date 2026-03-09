#include <stdio.h>

int main() {
    int a,b,sum=0,max=0;
    scanf("%d %d",&a,&b);
    int arr[a][b];
    for(int i=0;i<a;i++){
        for(int j=0;j<b;j++){
            scanf("%d",&arr[i][j]);
        }
    }
    for(int i=0;i<a-1;i++){
        for(int j=0;j<b-1;j++){
            sum=arr[i][j]+arr[i][j+1]+arr[i+1][j]+arr[i+1][j+1];
            }
            if(sum>max)
            max=sum;
    }
    printf("%d",max);
    return 0;
}
