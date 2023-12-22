#include <iostream>
using namespace std;
int main(int count, char* argInput[]){
  if(count > 0){
    cout << "Program name: '" << argInput[0] << "'\n";
    cout << "Called with " << (count - 1) <<" arguments: ";
    for(int i = 1; i < count; i++){
      cout << "'" << argInput[i] << "' ";
    }
  }
}