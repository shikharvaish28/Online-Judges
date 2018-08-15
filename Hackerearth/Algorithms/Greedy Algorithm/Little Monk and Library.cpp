// https://www.hackerearth.com/practice/algorithms/greedy/basics-of-greedy-algorithms/practice-problems/algorithm/little-monk-and-library/

#include <bits/stdc++.h>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    long long size, *a, *b, sum = 0, min = 9999;
    cin >> size;
    a = new long long[size];
    b = new long long[size];
    for (int i = 0 ; i < size ; i++)
        cin >> a[i];
    for (int i = 0 ; i < size ; i++)
        cin >> b[i];
    sort(b , b+size);
    sort(a , a+size);
    for (int i = 0 ; i < size; i ++){
        sum += abs(a[i] - b[i]);
    }
    cout << sum;
    return 0;
}

