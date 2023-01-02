#include <stdio.h>

int main(){
    int n;
    scanf("%d",&n);
    if(n>=1 && n<=100){
        int arr[100];
        for(int i = 0; i<n; i++){
            int sum = 0;
            int x;
            scanf("%d",&x);
            if(x>=1 && x<=1000){
                for(int j = 1; j<=x; j++){
                    if(j%2==1){
                        int count = (x-j+1)*(x-j+1);
                        sum+=count;
                    }
                }
                arr[i] = sum;
            }
        }
        for(int i = 0; i<n; i++){
            printf("%d\n",arr[i]);
        }
    }
return 0;
}