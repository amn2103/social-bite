/*Q1. Create a class Student with:
- Private data members: name, rollNumber
- Public methods: setDetails(string, int), displayDetails()
Demonstrate how encapsulation restricts direct access to private members.*/
#include<iostream>
#include<string>
using namespace std;
class student {
    private:
    string name;
    int rollNumber ;
    public:
    // Method to set student details
    void setdetails(string n,int r){
        name = n;
        rollNumber = r;

    }
    void displayDetails(){
        cout<<"Name :"<<name<<endl;
        cout<<"Roll Number :"<<rollNumber<<endl;

    }
};
int main(){
    student s1 ;
    s1.setdetails("Aman ", 101);
    s1.displayDetails();
    return 0;
}