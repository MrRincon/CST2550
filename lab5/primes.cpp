#include <iostream>
#include <vector>
using namespace std;
bool isPrime(int num);
bool isPrime(int num){
        bool result = true;
        if(num >= 2){
            for(int i = 2; i < num; i++){
                if(num % i == 0){
                    result = false;
                    break;
                }
                if(i == num - 1){
                    result = true;
                }
            }
        }
        else{
            result = false;
        }
        return result;
    }
int main(){
    int x;
    cout << "\nEnter an integer: ";
    cin >> x;
    vector<int> primeVector;
    for(int i = 0; i < x; i++){
        if(isPrime(i+1)){
            primeVector.push_back(i+1);
        }
    }
    cout << "Size: "<< primeVector.size() <<"\nElements: ";
    for(int i = 0; i < primeVector.size(); i++){
        cout << primeVector[i] << ' ';
    }
}