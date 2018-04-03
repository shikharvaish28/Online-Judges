// https://www.hackerrank.com/challenges/inherited-code/problem
#include <iostream>
#include <string>
#include <sstream>
#include <exception>
using namespace std;

/* Define the exception here */
class BadLengthException : public exception { //declare a function named BadLengthException
public:
    BadLengthException(int length) // a constructor to take the length of the input from the parameter
    {
        len=length;
    }

    virtual const int what() //declare a virtual function 'what' to return the length
    {
        return len;
    }
private:
    int len=0; //initialise the variable named len = 0
};

bool checkUsername(string username) {
	bool isValid = true;
	int n = username.length();
	if(n < 5) {
		throw BadLengthException(n); //calling our class named 'BadLengthException' when a short lengthed input is found
	}
	for(int i = 0; i < n-1; i++) {
		if(username[i] == 'w' && username[i+1] == 'w') {
			isValid = false;
		}
	}
	return isValid;
}

int main() {
	int T; cin >> T;
	while(T--) {
		string username;
		cin >> username;
		try {
			bool isValid = checkUsername(username);
			if(isValid) {
				cout << "Valid" << '\n';
			} else {
				cout << "Invalid" << '\n';
			}
		} catch (BadLengthException e) {
			cout << "Too short: " << e.what() << '\n'; //calling out function what using exception to print the length 
		}
	}
	return 0;
}


/* This would also workœ */
// class BadLengthException {
//     private: 
//         int n;
//     public:
//         BadLengthException(int errornumber) {
//             n = errornumber;
//         }
    
//         int what() {
//             return n;
//         }
// };