// https://www.hackerearth.com/practice/algorithms/searching/linear-search/practice-problems/algorithm/min-max-8/

#include <iostream>

using namespace std;

int main (){
    int n, sum = 0,small = 999, large = 0;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n ; i++ ){
        cin >> arr[i];
        sum += arr[i];
        if (small > arr[i]){
            small = arr[i];
            
        }
        else if(large < arr[i]){
            large = arr[i];
        }

    }
    // cout << small << endl;
    // cout << large << endl;
    cout << (sum - large) << " "<< (sum - small) << endl;
    return 0;
}