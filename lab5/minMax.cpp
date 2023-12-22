#include <iostream> 
//#include <time.h>
//#include <stdlib.h>
using namespace std;
int main(){
    srand(time(NULL));
    int numbers[10];
    int minVal = 101;
    int maxVal = 0;
    for(int i = 0; i < 10; i++){
        numbers[i] = rand() % 101;
        if(numbers[i] > maxVal){
            maxVal = numbers[i];
        }
        if(numbers[i] < minVal){
            minVal = numbers[i];
        }
    }
    for(int i = 0; i < sizeof(numbers)/sizeof(int); i++){
        cout << numbers[i] << " ";
    }
    cout << "\nMin: " << minVal << "\nMax: " << maxVal;
}