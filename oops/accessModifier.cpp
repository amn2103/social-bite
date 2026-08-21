#include<iostream>
#include<string>
using namespace std;
class teacher {
    private:
    double salary;

    public: // access specifier
    // its all properties / attributes / data members 
    string name ;
    string dept;
    string subject;
    
    // its all member functions / methods 
    void chnageDept(string newDept){
        dept=newDept;
    }
    // setter method for salary
    void setSalary(double s){
        salary = s;
    }
    // getter method for salary
    double getsalary(){
        return salary ;
    }
};
int main(){
    // create object
    teacher t1;
    // access properties
    t1.name = "AMan ";
    t1.dept = "Cse";
    t1.subject = "C++";
    t1.setSalary(50000.0); // using setter method
    
    // access methods
    cout<<"Name :"<<t1.name<<endl;
    cout<<"Department :"<<t1.dept<<endl;
    cout<<"Subject :"<<t1.subject<<endl;
    cout<<"Salary :"<<t1.getsalary()<<endl; // using getter method)
    return 0;
}