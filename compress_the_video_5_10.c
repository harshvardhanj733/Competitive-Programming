#include <stdio.h>

int main(){
    int n;
    scanf("%d",&n);
    if(n>=1 && n<=1000){
        int arr[1000];
        for(int i = 0; i<n; i++){
            int m;
            scanf("%d",&m);
            if(m>=1 && m<=100000){
                int count = m;
                int arr2[100000];
                for(int j = 0; j<m; j++){
                    scanf("%d",&arr2[j]);
                }
                for(int j = 0; j<m-1; j++){
                    int k = j+1;
                    if(arr2[j]==arr2[k]){
                        count--;
                    }
                }
                arr[i] = count;
            }
        }
        for(int i = 0; i<n; i++){
            printf("%d\n",arr[i]);
        }
    }
return 0;
}