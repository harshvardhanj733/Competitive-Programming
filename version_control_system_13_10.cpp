#include <iostream>
using namespace std;

int main(){
    int t;
    cin>>t;
    if(t>=1 && t<=100){
        int arr[100][2];
        for(int i = 0; i<t; i++){
            int n, m, k;
            cin>>n>>m>>k;
            if(n>=1 && n<=100 && m>=1 && m<=n && k>=1 && k<=100){
                int arr1[100], arr2[100];
                for(int j = 0; j<m; j++){
                    cin>>arr1[j];
                }
                for(int j = 0; j<k; j++){
                    cin>>arr2[j];
                }

                int c1 = 0, c2 = 0;

                for(int j = 0; j<m; j++){
                    for(int h = 0; h<k; h++){
                        if(arr1[j] == arr2[h]){
                            c1++;
                        }
                    }
                }
                
                int arr3[200];
                for(int j = 0; j<m+k; j++){
                    for(int h = 0; h<m; h++){
                        arr3[j] = arr1[h];
                    }
                    for(int h = 0; h<k; h++){
                        arr3[j+m] = arr2[h];
                    }
                }
                int a = 0;
                for(int j = 1; j<=n; j++){
                    for(int h = 0; h<m+k; h++){
                        if(arr3[h]==j){
                            a = 1;
                            break;
                        }
                    }
                    if(a == 1){
                        c2++;
                    }
                }

                arr[i][0] = c1;
                arr[i][1] = c2;
            }
        }
        for(int i = 0; i<t; i++){
            printf("%d %d\n",arr[i][0], arr[i][1]);
        }
    }
return 0;
}