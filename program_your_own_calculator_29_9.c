#include <stdio.h>

int main(){
    int a, b;
    char space, c;
    scanf("%d",&a);
    scanf("%d",&b);
    scanf("%c",&space);
    scanf("%c",&c);
    if(a>=-1000 && a<=1000 && b>=-1000 && b<=1000 && b!=0){
        if(c == '+'){
            printf("%d",a+b);
        }
        else if(c=='-'){
            printf("%d",a-b);
        }
        else if(c=='*'){
            printf("%d",a*b);
        }
        else if(c == '/'){
            printf("%.1f",(float)a/b);
        }
    }
return 0;
}