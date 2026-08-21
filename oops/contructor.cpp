#include<iostream>
using namespace std;
class teacher {
    private:
    double salary;//  private access specifier, salary is not accessible outside this class 

    public:
    string name ;
    string subject;
    string dept;
    
    /*non parameterized  constructor
    teacher(){
        dept = "cse";
    }*/

    teacher(string n,string s,string d,double sal){//parameterized constructor
        name =n;
        subject =s;
        dept = d;
        salary = sal;
    }
    // copy contructor
    teacher( teacher &t){
        cout<<" i m a copy constructor"<<endl; // its cpoy the original contructor object
        name= t.name;
        subject = t.subject;
        dept = t.dept;
        salary = t.salary;
    }
    void getinfo(){
        cout<<"Name : "<<name<<endl;
        cout<<" Subject : "<<subject<<endl;
        cout<<" Department : "<<dept<<endl;
        cout<<" Salary : "<<salary<<endl;
    }
};
int main (){
    teacher t1("Aman","c++","cse",50000);
    t1.getinfo();
     teacher t2(t1);
    t2.getinfo();
    return 0;
}