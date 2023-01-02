#include <stdio.h>
#include <stdlib.h>

int main(){
    int n;
    scanf("%d",&n);
    if(n>=1 && n<=1000){
        int arr[1000];
        for(int i = 0; i<n; i++){
            int m, n;
            scanf("%d %d",&m,&n);
            int j = 1;
            if(m>=1 && m<=1000 && n>=1 && n<=1000){
                while(m>=0 && n>=0){
                    if(j%2==1){
                        m = m-j;
                        j++;
                    }
                    else if(j%2==0){
                        n = n-j;
                        j++;
                    }
                }
                if(m<0){
                    arr[i] = 0;
                }
                else if(n<0){
                    arr[i] = 1;
                }
            }
        }
        for(int i = 0; i<n; i++){
            if(arr[i] == 0){
                printf("Bob\n");
            }
            else if(arr[i] == 1){
                printf("Limak\n");
            }
        }
    }
return 0;
}