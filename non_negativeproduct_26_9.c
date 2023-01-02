#include <stdio.h>
#include <stdlib.h>

int main(){
    int n;
    scanf("%d",&n);
    if(n>=1 && n<=100){
        int ar[100];
        for(int i = 0; i<n; i++){
            int a, arr[10000], count = 0;
            scanf("%d",&a);
            if(a>=2 && a<=10000){
                for(int j = 0; j<a; j++){
                    scanf("%d",&arr[j]);
                    if(arr[j]<-1000 && arr[j]>1000){
                        break;
                    }
                }
                for(int k = 0; k<a; k++){
                    if(arr[k]<0){
                    ++count;
                    }
                    else if(arr[k] == 0){
                        count = 0;
                        break;
                    }
                }
                if(count%2 == 0 || count == 0){
                    ar[i] = 0;
                }
                else if(count%2 == 1){
                    ar[i] = 1;
                }
            }
        }
        for(int l = 0; l<n; l++){
            printf("%d\n", ar[l]);
        }
    }
return 0;
}