#include <iostream>
#include <fstream> 
#include <string>
using namespace std;
int main(int count, char *lineArray[]){
    //How to add, append and display content of a .txt file
    cout << count << endl;
    if(count == 2){
        fstream myFile;
        myFile.open(lineArray[1], ios::out);//write into file
        if(myFile.is_open()){
            myFile << "This is the new beggining of a file\n";
            myFile.close();
        }
        myFile.open(lineArray[1], ios::app);//append into file
        if(myFile.is_open()){
            myFile << "This has been recently appended to the original file\n";
            myFile.close();
        }
        myFile.open(lineArray[1], ios::in);//reading a file 
        if(myFile.is_open()){
            string line;
            while(getline(myFile, line)){
                cout << line << '\n';
            }
            myFile.close();
        }
    }
    else{
        cout << "Only ONE file can be created and modified at the time." << endl;
    }
}