#include <iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    if(n>=1 && n<=100){
        int arr[100];
        for(int i = 0; i<n; i++){
            int t,k,v;
            cin>>t>>k>>v;
            if(t>=1 && t<=100 && k>=1 && k<=100 && v>=1 && v<=100000){
                int arr2[100], sum = 0;
                for(int j = 0; j<t; j++){
                    cin>>arr2[j];
                    sum+=arr2[j];
                }
                float res = ((t+k)*v-sum)/(float)k;
                int check = res/1;
                if(res>=0 && res==check){
                    arr[i] = res;
                }
                else{
                    arr[i] = -1;
                }

            }
        }
        for(int i = 0; i<n; i++){
            cout<<arr[i]<<endl;
        }
    }
    return 0;
}