#include <iostream> 
#include <cmath>
using namespace std;
int main(){
    cout << "Enter a number: ";
    double number;
    cin >> number;
    cout << "The cube of " << number << " is " << pow(number, 3) << '\n';
}