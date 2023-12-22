#include <iostream>
using namespace std;
int main(){
    //Pointer Types, Operators and Updating Values... Slide 7-9
    int firstNumber = 5;
    int* ptrToMyNumber  = &firstNumber;
    cout << "The variable: " << firstNumber << " The address: " << &firstNumber << '\n'
        << "The pointer: " << ptrToMyNumber << " The dereference: " << *ptrToMyNumber 
            << " The address: " << &ptrToMyNumber<< '\n';
    *ptrToMyNumber = 10;
    cout << "The new value of the variable is: " << firstNumber << '\n';
    //Arrays,Pointers and Accessing Other Elements... Slide 10-11
    int arrayNumbers[5] = {2, 4, 6, 8, 10};
    int* ptrArrayNum = arrayNumbers;
    cout << "1st element: " << *ptrArrayNum << '\n'
        << "2nd element: " << arrayNumbers[1] << '\n'
        << "3rd element: " << *(ptrArrayNum + 2) << '\n'
        << "Address of the 4th element: " << ptrArrayNum + 2 << '\n';
    //C String and Char Array... Slide 14-15
    const char* firstName = "Barry";
    cout << "Name: " << firstName << '\n';
    char secondName[] = "Barry";
    cout << "Name: " << secondName << '\n';
    secondName[0] = 'H';
    cout << "Name: " << secondName << '\n';
    // Dynamic Array Allocation...  Slide 16
    int* ptrDynaAllocation = new int;
    *ptrDynaAllocation = 100;
    cout << "Dynamic Allocation " << *ptrDynaAllocation << '\n';
    delete ptrDynaAllocation;
    cout << *ptrDynaAllocation << '\n';
    // Dynamic Array Allocation 2...  Slide 17
    int size = 10;
    int* ptrDynaAllocation2 = new int[size];
    ptrDynaAllocation2[5] = 100;
    cout << ptrDynaAllocation2 << " " << *ptrDynaAllocation2 << " " 
        << &ptrDynaAllocation2 << '\n';
    for(int i = 0;i < size; i++){
        cout << ptrDynaAllocation2[i] << " \n";
    }
    //Resizable Arrays... Slide 19
    int* ptrData = new int[size];
    for(int i = 0; i < size; i++){
        ptrData[i] = 100 + i;
        cout << ptrData[i] << " ";
    }
    cout << '\n';
    int* ptrBiggerData = new int[size*2];
    for(int i = 0; i < size; i++){
        ptrBiggerData[i] = ptrData[i];
    }
    for(int i = 0; i < size*2; i++){
        cout << ptrBiggerData[i] << " ";
    }
    delete[] ptrData;
    ptrData = ptrBiggerData;
    size = size*2;
    //Memory Leak and Dangling Pointer... Slide 20-21
    delete[] ptrBiggerData;
    ptrBiggerData = nullptr;
    cout << '\n';
    //Structured Types, Operating on Structures... Slide 23-24
    struct structPostalAddress{
        int doorNumber;
        string road;
    };
    structPostalAddress primeMinisterAddress;
    primeMinisterAddress.doorNumber = 10;
    primeMinisterAddress.road = "Downing Street\n";
    structPostalAddress destination = primeMinisterAddress;
    if(destination.doorNumber == primeMinisterAddress.doorNumber
    && destination.road == primeMinisterAddress.road){
        cout << "Off to see the PM\n";
    }
    //Arrays of Structures... Slide 25
    structPostalAddress route[10];
    for(int i = 0; i < 10; i++){
        route[i].doorNumber = 10+i;
        route[i].road = "Avenue";
        cout << "Route is " << route[i].doorNumber 
        << " " << route[i].road << '\n';
    }
    //Pointer to Structure... Slide 28-29
    structPostalAddress* ptrAddress = new structPostalAddress;
    ptrAddress->doorNumber = 2;
    ptrAddress->road = "Street";
    cout << ptrAddress->doorNumber << " " << ptrAddress->road << '\n';
}