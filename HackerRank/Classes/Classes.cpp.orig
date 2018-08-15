//using a constructor is a good practice since when we call this file from another .cpp file, it can be used to set default value
//stringstream :When a person returns a string, one of two things happen: 1. They return the string as-is. 2. They return the string after having been appended to by other data, AKA Concatenation.

// Stringstream allows one to bypass the concatenation process, bringing the code to fewer lines.

#include <iostream>
#include <sstream>
using namespace std;

class Student {
    private:
        int age;
        string first_name;
        string last_name;
        int standard;
    public:
        void set_age(int a) {
            age = a;
        }
        int get_age() {
            return age;
        }

        void set_first_name(string fn) {
            first_name = fn;
        }
        string get_first_name() {
            return first_name;
        }

        void set_last_name(string ln) {
            last_name = ln;
        }
        string get_last_name() {
            return last_name;
        }

        void set_standard(int s) {
            standard = s;
        }
        int get_standard() {
            return standard;
        }

        string to_string() {
            stringstream ss;
            ss << age << "," << first_name << "," << last_name << "," << standard;
            return ss.str();
        }
};

int main() {
    int age, standard;
    string first_name, last_name;
    
    cin >> age >> first_name >> last_name >> standard;
    
    Student st;
    st.set_age(age);
    st.set_standard(standard);
    st.set_first_name(first_name);
    st.set_last_name(last_name);
    
    cout << st.get_age() << "\n";
    cout << st.get_last_name() << ", " << st.get_first_name() << "\n";
    cout << st.get_standard() << "\n";
    cout << "\n";
    cout << st.to_string();
    
    return 0;
}
