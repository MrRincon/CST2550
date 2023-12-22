#include <iostream>
using namespace std;
// void swap(int numbers[], int x, int y);
void swap(int numbers[], int size, int x, int y){
    if(x > size || y > size){
        cout << "The values to be swapped have to be inside the array.\nPlease consider the size of the array as your MAX";
    }
    else{
        int temp = numbers[x];
        numbers[x] = numbers[y];
        numbers[y] = temp;
        for(int i = 0; i < size; ++i){
            cout << numbers[i] << ' ';
        }
    }
}
int main(){
    int inputSize, firstValue, secondValue;
    cout << "Enter size of the array: ";
    cin >> inputSize;
    cout << "Enter first allocation: ";
    cin >> firstValue;
    cout << "Enter second allocation: ";
    cin >>  secondValue;
    int numbers[inputSize] = {1, 2, 3};
    swap(numbers, inputSize, firstValue, secondValue);
}