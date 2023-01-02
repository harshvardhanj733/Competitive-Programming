#include <stdio.h>
#include <string.h>

int main(){
    int n;
    scanf("%d",&n);
    if(n>=1 && n<=1000){
        int sum = 0;
        int arr[1000];
        int check = 0;
        for(int i = 0; i<n; i++){
            int digits;
            scanf("%d",&digits);
            sum += digits;
            char arr2[1000];
            // for(int j = 0; j<digits; j++){
            //     scanf("%c", &arr2[j]);
            // }
            scanf("%s", arr[2]);
            // gets(arr2);
            for(int k = 0; k<digits; k++){
                if(arr2[k] == '5' || arr2[k] == '0'){
                    check = 1;
                    break;
                }
            }
            arr[i] = check;
        }

        if(sum>=1 && sum<=1000){
            for(int i = 0; i<n; i++){
                if(arr[i] == 1){
                    printf("YES\n");
                }
                else{
                    printf("NO\n");
                }
            }
        }
    }
return 0;
}