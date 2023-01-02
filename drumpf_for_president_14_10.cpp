#include <iostream>
using namespace std;

int main(){
    int t;
    // cin>>t;
    scanf("%d",&t);
    if(t>=1 && t<=100){
        int arr[100];
        for(int i = 0; i<t; t++){
          int n, k;
        //   cin>>n>>k;
        scanf("%d %d",&n, &k);
          if(n>=1 && n<=100 && k>=1 && k<=n){
            int arr2[100];
            int count = 0;
            for(int j = 0; j<n; j++){
                // cin>>arr2[j];
                scanf("%d",&arr2[j]);
            }

            int arr3[100];
            for(int j = 1; j<n+1; j++){
                int c = 0;
                for(int h = 0; h<n; h++){
                    if(arr2[h] == j && h!=j-1){
                        c++;
                    }
                }
                arr3[j-1] = c;
            }

            for(int j = 0; j<n; j++){
                if(arr3[j] >= k){
                    count++;
                }
            }
            arr[i] = count;
          }  
        }

        for(int i = 0; i<t; i++){
            cout<<arr[i]<<endl;
        }
    }
return 0;
}