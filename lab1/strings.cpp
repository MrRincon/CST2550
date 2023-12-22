#include <iostream>
#include <string>
using namespace std;
int main(){
    string name = "Barry";
    cout << "length(): " << name.length() << '\n';
    cout << "substr(2): " << name.substr(2) << '\n';
    cout << "substr(2,2): " << name.substr(2,2) << '\n';
}