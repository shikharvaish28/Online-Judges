// https://www.hackerearth.com/practice/algorithms/searching/linear-search/practice-problems/algorithm/square-transaction-20/

#include <bits/stdc++.h>

using namespace std;

int main(){
    long long n;
    cin >> n;
    int arr[n], sum, query, target;
    // Take input
    for (int i = 0; i < n; i++){
        cin >> arr[i];
    }
    cin >> query;
    while (query --){
        sum = 0;
        target = 0;
        cin >> target;
    for (int j = 0 ; j < n ; j++){
        sum = sum + arr[j];
        if (j == n-1 && sum < target)
            cout << -1 << endl;
        else if (sum >= target){
            cout << j+1 << endl;
            break;
        }

    }
    }
    return 0;
    
}