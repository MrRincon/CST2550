#include <iostream>
#include <fstream>
#include <string>
using namespace std;
//Please do a file first using input.cpp and edit the file before this.
int main(int count, char *lineArray[]){
    cout << count << endl;
    if(count == 3){
        ifstream inputFile(lineArray[1]);
        ofstream inputCopyFile(lineArray[2]);
        if(inputFile.is_open() && inputCopyFile.is_open()){
            string line;
            while(getline(inputFile, line)){
                cout << line << '\n';
                inputCopyFile << line << '\n';
            }
            inputFile.close();
            inputCopyFile.close();
            cout << "File copied successfully." << endl;
        }
        else{
            cout << "Failed to open the files" << endl;
        }
    }
    else{
        cout << "Please enter two files only.";
    }
}