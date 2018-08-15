// https://www.hackerrank.com/challenges/cpp-maps/problem
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <set>
#include <map>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    map <string ,int >m;
    int n , marks , type ;
    string name;
    cin >> n;
    while (n > 0){
        cin >> type >> name;
        switch (type)
        {
            case 1: //m.insert(make_pair(name, marks));
                cin >> marks;
                m[name] += marks;
            break;
            case 2 : m.erase(name);
            break;
            case 3 :cout << m[name]<<endl;
            break;
            
        }
        n--;
    }
    return 0;
}
