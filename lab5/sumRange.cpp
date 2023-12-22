#include <iostream>
using namespace std; 
void sumRange(){
    int x, y, sum;
    sum = 0;
    cout << "Enter the first number and second number: ";
    cin >> x >> y;
    int maxNum = max(x,y);
    int minNum = min(x,y);
    for(int i = minNum; i <= maxNum; ++i){
        sum += i;
    }
    cout << sum;
}
int main(){
    sumRange();
    return 0;
}