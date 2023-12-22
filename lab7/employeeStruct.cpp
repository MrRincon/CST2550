#include <iostream>
using namespace std;
struct employeeStructure{
    string firstName;
    string lastname;
    string id;
    string email;
    string phonenumber;
    double salary;
    employeeStructure* manager;
};
void populate(employeeStructure* employee);
void populate(employeeStructure* employee, string fname, string lname, string id, 
string email, string phoneNum, double Salary, employeeStructure* manager){
    employee->firstName = fname;
    employee->lastname = lname;
    employee->id = id;
    employee->email = email;
    employee->phonenumber = phoneNum;
    employee->manager = manager;
}
void addWorkers(){
    employeeStructure member1;
    employeeStructure member2
    employeeStructure manager;
    populate(&member1, "Tommy", "Krueger", "M0098", "helloworld@gmail.com", 11111, &manager);
    populate(&member2, "John", "DumDum", "M0032", "anotherworld@gmail.com", 22222, &manager);
    populate(&manager, "Sam", "Pito", "M1000", "againanotherone@gmail.com", 233434, nullptr);
}
int main(){
    cout << "Amount of staff: ";
    int staffNum;
    cin >> staffNum;
    employeeStructure* members = new employeeStructure[staffNum];
    for(int i = 0; i < staffNum; i++){
        cout << "Enter first name: ";
        cin >> members[i].firstName;
        cout << "Enter last name: ";
        cin >> members[i].lastname;
        cout << "Enter id (only numbers): ";
        cin >> members[i].id;
        cout << "Enter email: ";
        cin >> members[i].email;
        cout << "Enter phone number: ";
        cin >> members[i].phonenumber;
        cout << "Enter salary: ";
        cin >> members[i].salary;
    }
    string employeeStr = "[ID]\t[FNAME]\t[LNAME]";
    cout << employeeStr << endl;
    for(int i = 0; i < 3; i++){
        cout << i+1 + " Employee: " << members[i].firstName << ' ' 
            << members[i].lastname << " ID: " << members[i].id <<'\n';
    }
    return 0;
}