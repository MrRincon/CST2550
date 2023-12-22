#include <iostream>
using namespace std;
int main(){
    char newChar;
    cout << "Enter a character: ";
    cin >> newChar;
    if(newChar == 'a'||newChar == 'e'||newChar == 'i'||newChar == 'o' 
    ||newChar == 'u'){
        cout << "The char " << newChar << " is a vowel";
    }
    else if(newChar == '!'||newChar == '?'||newChar == '('||newChar == ')'
    ||newChar == '#'||newChar == ':'||newChar == ';'||newChar == ','
    ||newChar == '.'){
        cout << "The char " << newChar << " is punctuation";
    }
    else if(newChar == '0'||newChar == '1'||newChar == '2'||newChar == '3'
    ||newChar == '4'||newChar == '5'||newChar == '6'||newChar == '7'
    ||newChar == '8'||newChar == '9'){
        cout << "The char " << newChar << " is a digit";
    }
    else{
        cout << "The char " << newChar << " is probably a consonant.\nOtherwise is unrecognised";
    }
    return 0; 
}