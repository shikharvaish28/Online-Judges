// https://www.hackerearth.com/practice/algorithms/searching/linear-search/practice-problems/algorithm/monk-takes-a-walk/

#include<iostream>
#include<bits/stdc++.h>
#include <string.h>

using namespace std;

int main() {
    int n, c;
    string str;
    c= 0;
    cin >>  n;
    while (n--){
    c = 0;
    getline(cin , str);
    toUpper(str);
    for (int i = 0; i < str.length() ; i++ ){
        if (str[i] =='A'  ||str[i] == 'E' ||str[i] == 'I' || str[i] =='O' || str[i] =='U'  )
            c++;
    }
    cout << c << endl; 
    }
    return 0;
}


