#include <stdio.h>

int main() {
    int a,b,max=0,max2=0;
    scanf("%d %d",&a,&b);
    int arr[a][b];
    for(int i=0;i<a;i++){
        for(int j=0;j<b;j++){
            scanf("%d",&arr[i][j]);
        }
    }
    for(int i=0;i<a;i++){
        for(int j=0;j<b;j++){
           if(max<arr[i][j])
           max=arr[i][j];
        }
    }
    for(int i=0;i<a;i++){
        for(int j=0;j<b;j++){
            if(max2<arr[i][j] && arr[i][j]!=max)
            max2=arr[i][j];
        }
    }
    printf("%d",max2);
    return 0;
}
