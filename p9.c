#include <stdio.h>

int main() {
    int a,b,count=0,even=0,odd=0;
    scanf("%d %d",&a,&b);
    int arr[a][b];
    for(int i=0;i<a;i++){
        for(int j=0;j<b;j++){
            scanf("%d",&arr[i][j]);
        }
    }
    for(int i=0;i<a;i++){
        for(int j=0;j<b;j++){
            if(arr[i][j]%2==0)
            even++;
            else
            odd++;
        }
        if(even==odd)
        count++;
    }
    printf("%d",count);
    return 0;
}
