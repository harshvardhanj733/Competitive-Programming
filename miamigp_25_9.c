#include <stdio.h>
#include <stdlib.h>

int main(){
    int n;
    char* str[20000];
    scanf("%d",&n);
    int x, y;
    if(n>=1 && n<=2*10*10*10*10){
        for(int i = 0; i<n; i++){
            scanf("%d %d", &x, &y);
            if(x>=1 && x<=200 && y>=1 && y<=200){
                if(y>1.07*x){
                    str[i] = "NO";
                }
                else{
                    str[i] = "YES";
                }
            }
        }
    }

    for(int j = 0; j<n; j++){
        printf("%s\n",str[j]);
    }
return 0;
}