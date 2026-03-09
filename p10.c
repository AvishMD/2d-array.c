#include <stdio.h>

int main() {
    int a,b,fact=1,max=0,index=0;
    scanf("%d %d",&a,&b);
    int arr[a][b];
    for(int i=0;i<a;i++){
        for(int j=0;j<b;j++){
            scanf("%d",&arr[i][j]);
        }
    }
    for(int i=0;i<a;i++){
        for(int j=0;j<b;j++){
            fact=fact*arr[i][j];
        }
        if(i==0 || max<fact){
        max=fact;
        index=i;
        }
    }
    printf("%d",index);
    return 0;
}
