#include <iostream>
using namespace std;
void gradeLoop(){
    int i, x, grades[100];
    double average;
    while(x != -1){
        cout << "Enter grade or -1 to exit: ";
        cin >> x;
        if(x != -1){
            grades[i] = x;
            average += x;
            i++;
        }
    }
    cout << "The average is: " << average;
}
int main(){
    gradeLoop();
    return 0;
}