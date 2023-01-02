#include <stdio.h>
#include <math.h>

int main(){
    int n;
    scanf("%d",&n);
    if(n>=1 && n<=100){
        int arr[100];
        for(int i = 0; i<n; i++){
            int x;
            scanf("%d",&x);
            float n = (-1 + floor(sqrt(1 + 8*x)))/2;
            arr[i] = (int) n;
        }
        for(int i = 0; i<n; i++){
            printf("%d\n", arr[i]);
        }
    }
return 0;
}