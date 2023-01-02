#include <stdio.h>

int main(){

    int T;
    scanf("%d",&T);
    if(T>=1 && T<=1000){
        int arr[1000];
        for(int i = 0; i<T; i++){
            int N, K, L;
            scanf("%d %d %d",&N, &K, &L);
            if(N>=1 && N<=1000 && L>=1 && L<=1000 && K>=-1000 && K<=1000){
                int arr2[1000];
                for(int j = 0; j<N; j++){
                    scanf("%d",&arr2[j]);
                    // if(arr2[j]>1000 || arr2[j]<1){
                    //     break;
                    // }
                }
                int check = arr2[N-1];
                int a = 0;
                if(K>0){
                    for(int k = 0; k<N-1; k++){
                        if(arr2[k] >= check*K*(L-1)){
                            a = 0;
                            break;
                        }
                        else{
                            a = 1;
                        }
                    }
                }
                else if(K<=0){
                    for(int k = 0; k<N-1; k++){
                        if(arr2[k] >= check){
                            a = 0;
                            break;
                        }
                        else{
                            a = 1;
                        }
                    }
                }
                arr[i] = a;
                // if(a==0){
                //     arr[i] = 0;
                // }
                // else if(a==1){
                //     arr[i] = 1;
                // }
            }
        }

        for(int i = 0; i<T; i++){
            if(arr[i] == 0){
                printf("No\n");
            }
            else if(arr[i] == 1){
                printf("Yes\n");
            }
        }
    }

return 0;
}