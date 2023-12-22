#include <iostream>
using namespace std;
int main(){
  cout <<"Enter two numbers";
  double x, y;
  cin >> x >> y;
  cout <<"The sum of "<<x<<" and "<<y<<" is "<<x+y<< endl;
  cout <<"The difference between "<<x<<" and "<<y<<" is "<<x-y<< endl;
  cout <<"The product of "<<x<<" and "<<y<<" is "<<x*y<< endl;
  cout <<"The distance between "<<x<<" and "<<y<<" is "<<abs(x-y)<< endl;
  cout <<"The mean average of "<<x<<" and "<<y<<" is "<<(x+y)/2<< endl;
  return 0;
  }