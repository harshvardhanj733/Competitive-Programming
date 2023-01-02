#include <stdio.h>

int main(){
    int n;
    scanf("%d",&n);
    if(n>=1 && n<=100000){
        int arr[100000];
        for(int i = 0; i<n; i++){
            int days, d, p, q;
            scanf("%d %d %d %d",&days, &d, &p, &q);
            if(days>=1 && days<=1000000 && d>=1 && d<=1000000 && p>=1 && p<=1000000 && q>=1 && q<=1000000){
                int prep = p;
                int count = 0, c = 0;
                int k;
                for(k = 1; k<=days; k += d){
                    p = prep + c*q;
                    c++;
                    // count += d*p;
                    for(int o = k; o<k+d; o++){
                        if(o>days){
                            break;
                        }
                        else{
                            count+=p;
                        }
                    }
                }
                if(k<days){
                    p += q;
                    for(int j = i+1; j<=days; j++){
                        count += p;
                    }
                }
                arr[i] = count;
            }
        }
        for(int i = 0; i<n; i++){
            printf("%d\n",arr[i]);
        }
    }
return 0;
}