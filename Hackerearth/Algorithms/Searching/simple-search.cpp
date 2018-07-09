// https://www.hackerearth.com/practice/algorithms/searching/linear-search/practice-problems/algorithm/simple-search-4/

#include<iostream>
using namespace std;
int main(){
    int n, k;
    cin >> n;
    int arr[n];
    for (int i = 0 ; i < n ; i++ ){
        cin >> arr[i];
    }
    cin >> k;
    for (int j = 0 ; j < n ; j++ )
    if (k == arr[j])
        cout << j << endl;
    
    return 0;
}