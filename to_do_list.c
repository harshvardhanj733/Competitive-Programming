#include <stdio.h>

int main(){
    int n;
    int arr1[1000];
    scanf("%d",&n);
    if(n>=1 && n<=1000){
        for(int i = 0; i<n; i++){
            int arr2[1000];
            int m;
            scanf("%d", &m);
            if(m>=1 && m<=1000){
                int count = 0;
                for(int j = 0; j<m; j++){
                    scanf("%d", &arr2[j]);
                    if(arr2[j]>=1 && arr2[j]<=5000){
                        if(arr2[j]>=1000){
                            count++;
                        }
                    }
                    else{
                        break;
                    }
                }
                arr1[i] = count;
                count = 0;
            }
        }
        for(int i = 0; i<n; i++){
            printf("%d\n",arr1[i]);
        }
    }
return 0;
}