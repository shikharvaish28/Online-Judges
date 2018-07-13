// https://www.hackerearth.com/practice/algorithms/sorting/bubble-sort/practice-problems/algorithm/save-patients/

#include <bits/stdc++.h>

using namespace std;

int main(){
    int n ,*vacc, *mito;
    cin >> n ; 
    vacc = new int[n];
    mito = new int[n];
    for (int i = 0; i < n; i++)
        cin >> vacc[i];
    for (int i = 0; i < n; i++)
        cin >> mito[i];    
    sort(vacc, vacc+n);
    sort(mito , mito+n);
    if (mito[n] > vacc[n])
        cout << "Yes";
    else 
        cout << "No";
    return 0;
}