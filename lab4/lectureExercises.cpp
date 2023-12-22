#include <iostream>
#include <fstream>
#include <vector>
#include <array>
using namespace std;
int main(){
    int firstWhileLoop = 0;
    while (firstWhileLoop < 10){
        cout << "Before operation: " << firstWhileLoop << '\n';
        ++firstWhileLoop;
        cout << "After operation: " << firstWhileLoop << '\n';
    }
    int count = 0;
    double grade = 0, sum = 0;
    while (grade >= 0){
        cout << "Enter a grade: ";
        cin >> grade;
        if (grade >= 0){
            sum += grade;
            count++;
        }
        if (count > 0){
            cout << "Average grade: " << sum / count << '\n';
        }
        else{
            cout << "Negative number are not accepted.\n" 
                << "Closing while loop.\n";
        }
    }
    int i = 0, n =1, m = 2;
    cout << "n " << "m " << "i\n"
        << n << " " << m << " " << i <<'\n';
    while (i < 5 && n <= m){
        n += i *2;
        m +=i;
        i++;
        cout << n << " " << m << " " << i <<'\n';
    }
    int primes[] = {2, 3, 5, 7, 11};
    cout << "First prime: " << primes[0];
    cout << "\nSecond prime: " << primes[1];
    cout << "\nThird prime: " << primes[2];
    cout << "\nFourth prime: " << primes[3];
    cout << "\nFifth prime: " << primes[4] << '\n';
    const int MAX_SIZE = 100;
    int number;
    int size = 0;
    int nums[MAX_SIZE];
    cout << "Enter a number: ";
    cin >> number;
    cout << "Before operation: \n" << number << " " << size << " " << MAX_SIZE << " " << nums[MAX_SIZE] << '\n';
    nums[size++] = number;
    cout << "After operation: \n" << number << " " << size << " " << MAX_SIZE << " " << nums[MAX_SIZE] << '\n';
    int numsLengthTwo[2] = {2, 3};
    cout << "Length Two: " << numsLengthTwo[2] << '\n';
    int numsLengthFive[5] = {2, 3};
    cout << "length Five: " << numsLengthFive[5] << '\n';
    int numsLoop[2] = {1, 2};
    numsLoop[2] = 3;
    numsLoop[3] = 4;
    for (int i = 0; i < 4; ++i){
        cout << numsLoop[i] << ' ';
    }
    const int SIZE = 8;
    int numsMaxIndex[SIZE] = {75, 10, 32, 55, 16, 23, 73, 52};
    int maxIndex = 0;
    for (int i = 1; i < SIZE; ++i){
        if (numsMaxIndex[i] > numsMaxIndex[maxIndex]){
            maxIndex = i;
            cout << numsMaxIndex[i] << ' ' << i << '\n';
        }
    }
    array<int,5> numsArray;
    cout << numsArray.size() << '\n';
    vector<int> numsVector;
    numsVector.push_back(1);
    numsVector.push_back(2);
    cout << "numsVector vector has " << numsVector.size() << " elements\n"
        << numsVector[0] << " and " << numsVector[1] << '\n';
    vector<int> numsNewVector = {1,2,3,4,5};
    cout << "numsNewVector vector contains: \n";
    for (int i = 0; i < numsNewVector.size(); ++i){
        cout << numsNewVector[i] << '\n';
    }
}