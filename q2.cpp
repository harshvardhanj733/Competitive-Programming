#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int n, num[10000];
	cin>>n;
	for(int i = 0; i < n; i++){
	    int ht, no_of_players, count = 0;
	    int arr[10000];
	    cin>>no_of_players>>ht;
	    for(int j = 0; j<no_of_players; j++){
	        cin>>arr[j];
	    }
	    for(int k = 0; k<no_of_players; k++){
	        if(arr[k]>ht){
	            count++;
	        }
	    }
	    num[i] = count;
	}
	for(int i = 0; i < n; i++){
	    cout<<num[i]<<endl;
	}
	return 0;
}