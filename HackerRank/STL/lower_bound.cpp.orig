//  https://www.hackerrank.com/challenges/cpp-lower-bound/problem
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int n , inp , query;
    cin >> n;
    vector <int> v;
    for (int i = 0 ; i < n ; i++){
        cin >> inp;
        v.push_back(inp);
    }//finished taking input
    cin >> query;
    int val ; 
    while (query > 0){
        cin >> val;
        //declare a lower bound iterator
        vector <int> :: iterator low = lower_bound(v.begin() , v.end() , val);
         if (v[low - v.begin()] == val)
           cout << "Yes " << (low - v.begin()+1) << endl;
       else
           cout << "No " << (low - v.begin()+1) << endl;
        
        query--;
    }
    return 0;
}
