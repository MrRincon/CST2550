#include <iostream>
using namespace std;
int main(){
    double dNumber = 2.4;
    double* ptrTodNumber = &dNumber;
    cout << "Variable value: " << dNumber << "; address: " << &dNumber
    << "\nPointer value: " << ptrTodNumber << "; address: " << &ptrTodNumber
    << "; dereference: " << *ptrTodNumber;
}