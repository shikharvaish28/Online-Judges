#include <iostream>
#include <string>
using namespace std;

int main() {
   // Complete the program
    string c1,c2;
    cin>>c1>>c2;  
    int len1 = c1.length();
    int len2 = c2.length();
    printf("%d %d \n", len1,len2);
    cout<<c1+c2<<endl;
    char temp;
    temp = c1[0];
    c1[0] = c2[0];
    c2[0] = temp;
    cout<<c1<<" "<<c2<<endl;
    return 0;
}
