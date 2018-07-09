// https://www.hackerearth.com/practice/algorithms/searching/linear-search/practice-problems/algorithm/mannas-first-name-4/

#include<iostream>
#include<string>
#include<bits/stdc++.h>

using namespace std;

int main(){
    int n, suvo = 0, suvojit = 0;
    char str[150];
    cin >> n;
    while (n!=0){
        suvo = 0;
        suvojit = 0;
        cin >> str;
        for (int i = 0; i < strlen(str); i++){
            toupper(str[i]);
            if (str[i] == 'S' && str[i+1] == 'U' && str[i+2] == 'V'&& str[i+3] == 'O' && str[i+4] == 'J' &&
            str[i+5] == 'I' && str[i+6] == 'T'){
                suvojit++;
                // suvo++;
            }
            else if (str[i] == 'S' && str[i+1] == 'U' && str[i+2] == 'V' && str[i+3] == 'O'){
                suvo++;
            }
        }
        cout << "SUVO = " << suvo <<", SUVOJIT = " <<suvojit <<endl;
        n--;
    }
    
return 0;
}