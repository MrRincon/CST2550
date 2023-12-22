#include <iostream>
using namespace std;
int main(){
    int x, y, z;
    cout << "Enter three integers: ";
    cin >> x >> y >> z;
    if((x > y && y > z)||(x < y && y < z)){
        cout << "In order\n";
    }
    else{
        cout << "Not in order\n";
    }
}