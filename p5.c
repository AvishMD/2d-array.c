#include <stdio.h>

int main() {
    int a,b,sum=0,avg;
    scanf("%d %d",&a,&b);
    int arr[a][b];
    for(int i=0;i<a;i++){
        for(int j=0;j<b;j++){
            scanf("%d",&arr[i][j]);
        }
    }
    int min=0;
    for(int i=0;i<a;i++){
        for(int j=0;j<b;j++){
            sum+=arr[i][j];
        }
        avg=sum/b;
        if(i==0)
            min=avg;
        else if(avg<min){
            min=avg;
            printf("%d",i);
        }
    }

    return 0;
}
