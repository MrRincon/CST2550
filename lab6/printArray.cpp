#include <iostream>
using namespace std;
// void printArray(int numbers[], int size);
void printArray(int numbers[], int size){
    cout << "[";
    for(int i = 0; i < size; i++){
        cout << numbers[i];
        if(i != size - 1){
            cout << ",";
        }
    }
    cout << "]";
}
int main(){
    int inputSize;
    cout << "Enter size of the array: ";
    cin >> inputSize;
    int numbers[inputSize] = {1, 2, 3};
    printArray(numbers, inputSize);
}