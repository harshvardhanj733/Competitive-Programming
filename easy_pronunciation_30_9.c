#include <stdio.h>
#include <string.h>

int main(){
    int n;
    scanf("%d",&n);
    if(n>=1 && n<=100){
        int arr[100];
        for(int i = 0; i<n; i++){
            char arr2[100];
            int m;
            scanf("%d",&m);
            scanf("\n");
            // for(int j = 0; j<=m; j++){
            //     scanf("%c",&arr2[j]);
            // }
            scanf("%[^\n]s", arr2);
            scanf("\n");
            // fgets(arr2, 100, stdin);
            // scanf("\n");
            int check = 1;
            int o = 0;
            int p = 1;
            while(p<m){
                while(arr2[p]!='a' || arr2[p]!='e' || arr2[p]!='i' || arr2[p]!='o' || arr2[p]!='u'){
                    p++;
                }
                while(arr2[o]!='a' || arr2[o]!='e' || arr2[o]!='i' || arr2[o]!='o' || arr2[o]!='u'){
                    o++;
                }
                if(p-o>=4){
                    check = 0;
                    break;
                }
            }
            arr[i] = check;
        }

        for(int i = 0; i<n; i++){
            if(arr[i] == 0){
                printf("NO\n");
            }
            else{
                printf("YEs\n");
            }
        }
    }
return 0;
}