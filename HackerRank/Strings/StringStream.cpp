// for explanation see the editorial folder
// https://www.hackerrank.com/challenges/c-tutorial-stringstream/forum
#include <sstream>
#include <vector>
#include <iostream>
using namespace std;

vector<int> parseInts(string str) {
stringstream ss(str);   //takes string out of the input
vector<int> result;
char ch;
int tmp;
while(ss >> tmp) {      //checks if the next available thing is an integer or not
    result.push_back(tmp); //if the next available thing is an integer then 
    ss >> ch;           //??
}
return result;
   // Complete this function
}

int main() {
    string str;
    cin >> str;
    vector<int> integers = parseInts(str);
    for(int i = 0; i < integers.size(); i++) {
        cout << integers[i] << "\n";
    }
    
    return 0;
}
