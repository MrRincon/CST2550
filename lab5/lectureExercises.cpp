#include <iostream>
#include <cmath>
using namespace std;

//Calling funtions
/*int main(){
    double sqrt2 = sqrt(2);
    cout << "3 squared is " << pow(3, 2) << '\n';
    cout << "The absolute value of -5 is " << abs(-5) << '\n';
}
*/

//Function declarations and definitions
/*double area_of_square(double side);
int main(){
    double x;
    cout << "Enter the value of a side: ";
    cin >> x;
    cout << area_of_square(x) << '\n';
    return 0;
}
double area_of_square(double side){
    return side * side;
}*/

//Parameter passing
/*double square(double x);
double side;
double area;
int main(){
    side = 4;
    cout << square(side) << '\n'; 
    area = square(side);
    square(side);
    return 0;
}
double square(double x){
    return sqrt(x);
}*/

//Pass by reference
/*void times_two(double &x){
    x = x*2;
}
int main(){
    double length;
    cout << "Enter the length: ";
    cin >> length;
    times_two(length);
    cout << "length is " << length << '\n';
    return 0;
}*/

//Arguments
/*int main(int argc, char *argv[]){
    for (int i = 0 ;  i < argc; ++i){
        cout << argv[i] << '\n';
    }
    return 0;
}*/

//Program usage message
/*int main(int argc, char *argv[]){
    if (argc != 2){
        cout << "Usage: " << argv[0] << " input-filename\n";
        exit(1);
    }
    //...do something with file...
    return 0;
}*/

//Argument data types
int main(int argc, char *argv[]){
    if (argc != 2){
        cout << "Usage: " << argv[0] << " side-length\n";
        exit(1);
    }
    double side = atof(argv[1]);
    cout << side * side << '\n';
    return 0;
}
