/* Q2. Create a class Employee with:
- Private members: id, salary
- Public methods: setId(int), getId(), setSalary(double), getSalary()
Use encapsulation to ensure salary cannot be set below 0.*/
#include<iostream>
#include<string>
using namespace std;
class Employee{
    private :
    int id  ;
    double salary ;
    public:
    // Method to set employee ID
    void setId(int empId){
        id =empId;
    }
    void getId(){
        cout<<"Empolyee Id : "<< id <<endl;
    }
    void setSalary(double empSal){
        //salary = empSal < 0 ? 0 :empSal;
        if(empSal < 0){
            cout<<"Salary cannot be negative seeting to 0<<endl";
            salary = 0;
        }
        else {
            salary =empSal;
        }
    }
    void getSalary(){
        cout<< "Employe Salary :"<< salary <<endl;
    }
};
int main(){
    Employee e1;
    e1.setId(101201);
    e1.getId();
    e1.setSalary(25000);
    e1.getSalary();
    return 0;
}
