#include <iostream>;
using namespace std;
int main(){
    int number;
    cout << "Enter a number: ";
    cin >> number;
    if (number % 2 == 0){
        cout << number << " is even\n";
    }
    else if (number % 2 == 1){
        cout << number << " is odd\n";
    }
    return 0;
}