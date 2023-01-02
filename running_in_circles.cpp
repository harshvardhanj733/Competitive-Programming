#include<iostream>
#include<cstring>

using namespace std;

int main(){

    int n;
    cin>>n;
    int arr[100];
    for(int i = 0; i<n; i++){
        char dir_main = '0', final_dir;
        int num_laps = 0, count = 0;
        int lap, num;
        cin>>lap>>num;
        for(int j = 0; j<num; j++){
            int dist;
            char dir;
            cin>>dist>>dir;
            if(dir_main == '0'){
                num_laps += (dist+count)/lap;
                count = (count + dist)%lap;
                dir_main = dir;
                final_dir = dir_main;
            }
            else if(dir_main == dir){
                num_laps += (dist + count)/lap;
                count = (count + dist)%lap;
                final_dir = dir_main;
            }
            else{
                count = (lap-count);
                dir_main = dir;
                int incr, cnt;
                incr = (dist + count)/lap;
                cnt = (dist + count)%lap;
                if((num_laps == 0 || cnt == 0) && (incr==0 || final_dir == dir_main)){
                    num_laps = num_laps + incr;
                    count = (dist + count)%lap;
                }
                else{
                    num_laps += incr - 1;
                    count = (dist + count)%lap;
                    final_dir = dir_main;
                }
            }
        }
        arr[i] = num_laps;
    }

    for(int i = 0; i<n; i++){
        cout<<"Case #"<<i+1<<": "<<arr[i]<<endl;
    }

    return 0;
}