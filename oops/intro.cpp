#include<iostream>
#include<string>
using namespace std;
class teacher {
    public: // access specifier
    // its all properties / attributes / data members 
    string name ;
    string dept;
    string subject;
    double salary;
    // its all member functions / methods 
    void chnageDept(string newDept){
        dept=newDept;
    }
};
int main(){
    // create object
    teacher t1;
    // access properties
    t1.name = "AMan ";
    t1.dept = "Cse";
    t1.subject = "C++";
    t1.salary = 50000.0;
    // access methods
    cout<<"Name :"<<t1.name<<endl;
    cout<<"Department :"<<t1.dept<<endl;
    cout<<"Subject :"<<t1.subject<<endl;
    cout<<"Salary :"<<t1.salary<<endl;
    return 0;
}