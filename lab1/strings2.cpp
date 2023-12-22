#include <iostream>
#include <string>
using namespace std;
int main(){
    string name;
    int age;
    cout << "What is your name?";
    cin >> name;
    cout << "Enter your age: ";
    cin >> age;
    cout << "Welcome, " << name << " you are " << age << " years old\n";
}