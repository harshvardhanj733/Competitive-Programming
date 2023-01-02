// You don't need to add/edit anything to the below solution. 
// Click on the SUBMIT button to solve your first problem on CodeChef.

#include <stdio.h>
#include <iostream>
using namespace std;

int main(){
    
    int n;
    cin>>n;
    int arr[100];
    int sum;
    for(int i = 0; i < n; i++){
        int a, b;
        cin>>a>>b;
        sum = a + b;
        arr[i] = sum;
    }
    
    for(int i = 0; i < n; i++){
        cout<<arr[i]<<endl;
    }
    
    return 0;
}