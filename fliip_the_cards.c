#include <stdio.h>

int main(){
    int t;
    scanf("%d",&t);
    if(t>=1 && t<=5000){
        int arr[5000];
        for(int i = 0; i<t; i++){
            int n, x;
            scanf("%d %d", &n, &x);
            if(n>=2 && n<=100){
                if(x>=0 && x<=n){
                    if(x <= n-x){
                        arr[i] = x;
                    }
                    else{
                        arr[i] = n-x;
                    }
                }
            }
        }
        for(int i = 0; i<t; i++){
            printf("%d\n",arr[i]);
        }
    }
return 0;
}