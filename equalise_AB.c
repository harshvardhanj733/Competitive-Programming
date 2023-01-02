#include <stdio.h>

int main(){
    
    int n;
    scanf("%d",&n);
    if(n>=1 && n<=1000){
        int arr[1000];
        for(int i = 0; i<n; i++){
            long a, b, x;
            scanf("%d %d %d",&a,&b,&x);
            if(a>=1 && a<=1000000000 && b>=1 && b<=1000000000 && x>=1 && x<=1000000000){
                if(a==b){
                    arr[i] = 1;
                }
                else if(a>b){
                    if((a-b)%(2*x)==0){
                        arr[i] = 1;
                    }
                    else{
                        arr[i] = 0;
                    }
                }
                else if(a<b){
                    if((b-a)%(2*x)==0){
                        arr[i] = 1;
                    }
                    else{
                        arr[i] = 0;
                    }
                }
            }
        }
        for(int i = 0; i<n; i++){
            if(arr[i]==1){
                printf("YES\n");
            }
            else if(arr[i]==0){
                printf("NO\n");
            }
        }
    }

    return 0;
}