#include <stdio.h>

int main(){
    int T;
    scanf("%d",&T);
    if(T>=1 && T<=5){
        long arr[5];
        for(int i = 0; i<T; i++){
            long count = 0;
            long arr2[100000];
            long N;
            scanf("%li",&N);
            if(N>=2 && N<=100000){
                for(int j = 0; j<N; j++){
                    scanf("%li",&arr2[j]);
                }
                for(int j = 0; j<N; j++){
                    if(j==0){
                        if(arr2[j]!=arr2[j+1]){
                            count++;
                        }
                    }
                    else if(j==N-1){
                        if(arr2[j]!=arr2[j-1]){
                            count++;
                        }
                    }
                    else{
                        if(arr2[j]!=arr2[j-1] || arr2[j]!=arr2[j+1]){
                            count++;
                        }
                    }
                }
                arr[i] = count;
            }
        }
        for(int i = 0; i<T; i++){
            printf("%li\n",arr[i]);
        }
    }
return 0;
}