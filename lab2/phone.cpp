#include <iostream>
using namespace std;
int main(){
  string phoneNumber;
  cout << "Enter the phone number: ";
  cin >> phoneNumber;
  cout << "("+phoneNumber.substr(0,3)+") "+phoneNumber.substr(3,4)+" "+
    phoneNumber.substr(7,4);
  return 0;
  }