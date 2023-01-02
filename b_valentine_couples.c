#include <stdio.h>

int main(){
    int n;
    scanf("%d",&n);
    if(n>=1 && n<=5){
        int li[5];
        for(int i = 0; i<n; i++){
            int x;
            scanf("%d",&x);
            int boy[20000];
            int girl[20000];
            for(int j = 0; j<x; j++){
                scanf("%d",&boy[j]);
            }
            for(int j = 0; j<x; j++){
                scanf("%d",&girl[j]);
            }
            int sum = boy[0] + girl[0];
            for(int j = 0; j<x; j++){
                if(boy[j]+girl[j]>sum){
                    sum = boy[j] +girl[j];
                }
            }
            li[i] = sum;
        }
        for(int i = 0; i<n; i++){
            printf("%d\n",li[i]);
        }
    }
return 0;
}