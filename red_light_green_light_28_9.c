#include <stdio.h>

int main(){
    int n;
    scanf("%d",&n);
    if(n>=1 && n<=100000){
        int arr[100000];
        for(int i = 0; i<n; i++){
            int num, ht;
            scanf("%d %d",&num, &ht);
            if(num>=1 && num<=100000 && ht>=1 && ht<=1000000){
                int arr2[100000], count = 0;
                for(int j = 0; j<num; j++){
                    scanf("%d",&arr2[j]);
                    if(arr2[j]>=1 && arr2[j<=1000000]){
                        if(arr2[j]>ht){
                            count++;
                        }
                    }
                }
                arr[i] = count;
            }
        }
        for(int i = 0; i<n; i++){
            printf("%d\n", arr[i]);
        }
    }
return 0;
}