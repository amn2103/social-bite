#include<iostream>
using namespace std;
class person{
    public:
    string name;
    int age;
    person( string name , int age){
        this->name = name;
        this->age = age;
        
    }

     ~person(){ // destructor
        cout<<" I am a person destructor "<<endl;
    }
};
class student:public person {
    public:
    int rollNo ;
    student(string name ,int age , int rollNo) : person (name , age){
        this->rollNo = rollNo;
    }

     ~student(){ // destructor
        cout<<" I am a student destructor "<<endl;
    }
        
    void getInfo (){
    cout<<" Name : " <<name<<endl;
    cout<<" Age : " << age <<endl;
    cout<<" Roll No : " << rollNo <<endl;
    }

};
int main(){
    student s1("Aman", 22,101);
    
    s1.getInfo();
    return 0;
}