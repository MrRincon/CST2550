#include <iostream>
#include <limits>
using namespace std;
int main(){
    cout << sizeof(int) << '\n'
        << "minimum int value: \t"
        << numeric_limits<int>::min()
        << "\n maximum int value: \t"
        << numeric_limits<int>::max();
}