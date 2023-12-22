#include <iostream>
using namespace std;
void reverse(char s[], int size){
    for(int i = size; i >= 0; --i){
        cout << s[i];
    }
}
int main(){
    char nameArray[] = "Tommy";
    reverse(nameArray, sizeof(nameArray));
}