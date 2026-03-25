#include <string>
#include <iostream>
using namespace std;

// Classes is an blueprint to create multiple objects
// Objects is an entity or instance created from any particular classes

class Student {
public:
    string name;
    int rollNo;
    int marks;

    Student(string name,int rollNo,int marks){
        this->name = name;
        this->marks = marks;
        this->rollNo = rollNo;
    }

public:
    void displayName(){
        cout<<name<<endl;
    }

    void displayMarks(){
        cout<<marks<<endl;
    }
};

int main(){
    Student s1("Sanjug",21,88);
    s1.displayName();
    
    return 0;
}