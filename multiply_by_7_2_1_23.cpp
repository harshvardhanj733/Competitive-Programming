#include <iostream>
#include <string>
#include <cmath>
using namespace std;

int main(){
    //entering n inputs;
    int n; string arr[500];
    cin>>n;
    for(int i = 0; i<n; i++){
        long num; int m;
        cin>>num>>m;
        string num1 = to_string(num);
        int length = num1.length();
        long number = num;
        int arr2[10];
        for(int j = length-1; j>=0; j--){
            int digit = number/pow(10, j);
            number = number % (int)pow(10, j);
            digit = pow(digit, m);
            digit = digit%10;
            arr2[j] = digit;
        }
        long fin_num = 0;
        for(int j = length-1; j>=0; j--){
            fin_num += arr2[j]*pow(10, j);
        }
        if(fin_num % 7 == 0){
            arr[i] = "YES";
        }
        else{
            arr[i] = "NO";
        }
    }
    for(int i = 0; i<n; i++){
        cout<<arr[i]<<endl;
    }
return 0;
}