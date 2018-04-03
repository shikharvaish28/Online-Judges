// https://www.hackerrank.com/challenges/exceptional-server/problem
// https://www.hackerrank.com/challenges/exceptional-server/forum
// https://www.tutorialspoint.com/cplusplus/cpp_exceptions_handling.htm

#include <iostream>
#include <exception>
#include <string>
#include <stdexcept>
#include <vector>
#include <cmath>
using namespace std;

class Server {
private:
	static int load;
public:
	static int compute(long long A, long long B) {
		load += 1;
		if(A < 0) {
			throw std::invalid_argument("A is negative");
		}
		vector<int> v(A, 0);
		int real = -1, cmplx = sqrt(-1);
		if(B == 0) throw 0;
		real = (A/B)*real;
		int ans = v.at(B);
		return real + A - B*ans;
	}
	static int getLoad() {
		return load;
	}
};
int Server::load = 0;

int main() {
	int T; cin >> T;
	while(T--) {
		long long A, B;
		cin >> A >> B;
        try {      //main code starts from here
            cout << Server::compute(A,B) << endl; //send the input to the function for the process from this try block
        } //so that if any error occurs then being within the try block, it would catch the error and process it further accordingly
        catch (bad_alloc& error) {  //predefined error :: if the error is of bad_alloc then it would send automatically
            cout << "Not enough memory" << endl;
        }
        catch (exception& error) {
            cout << "Exception: " << error.what() << endl;
        }
        catch (...) {
            cout << "Other Exception" << endl;
        }
        	}
	cout << Server::getLoad() << endl;
	return 0;
}