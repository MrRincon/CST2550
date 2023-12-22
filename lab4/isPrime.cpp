#include <iostream>
using namespace std;
int main(){
  int number;
  cout << "Enter an integer: ";
  cin >> number;
  bool isPrime(number);
  if(number >= 2){
    for (int i = 2; i < number; i++){
      if (number % i == 0){
        isPrime = false;
        break;
      }
      if (i == number - 1){
        isPrime = true;
      }
    }
  }
  else{
    isPrime = false;
  }
  if(isPrime){
    cout << number << " is prime.\n";
  }
  else{
    cout << number << " is not prime.\n";
  }
  return 0;}