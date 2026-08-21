#include<iostream>
using namespace std;
class person{
    public:
    string name;
    int age;
    person(){// non-parameterized constructor
        cout<<" I am a person constructor "<<endl;
    }

     ~person(){ // destructor
        cout<<" I am a person constructor "<<endl;
    }
};
class student:public person {
    public:
    int rollNo ;
    student(){// non-parameterized constructor
        cout<<" I am a student constructor "<<endl;
    }

     ~student(){ // destructor
        cout<<" I am a student constructor "<<endl;
    }
        
    void getInfo (){
    cout<<" Name : " <<name<<endl;
    cout<<" Age : " << age <<endl;
    cout<<" Roll No : " << rollNo <<endl;
    }

};
int main(){
    student s1;
    s1.name = " aman ";
    s1.age = 22;
    s1.rollNo = 101;
    s1.getInfo();
    return 0;
}