#include <iostream>
using namespace std;
int main(){
  double x, y;
  cout <<"Enter the price: ";
  cin >> x;
  cout <<"Enter the tip percentage: ";
  cin >> y;
  cout <<"The tip is £"<<(y/100)*x<< endl;
  cout <<"The total amount to pay is £"<<(y/100)*x+x<< endl;
  return 0;
  }