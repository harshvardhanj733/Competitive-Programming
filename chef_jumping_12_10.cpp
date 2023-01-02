#include <iostream>
#include <cmath>
using namespace std;

int main(){
    long long int n;
    scanf("%d",&n);
    if(n>=0 && n<=pow(10,18)){
        int a = 0;
        int b = 0;
        while(a<=n){
            if(a==n){
                printf("yes\n");
                return 0;
            }
            b = (b+1)%4;
            if(b == 0){
                b++;
            }
            a += b;
        }
        printf("no\n");
        return 1;
    }
}