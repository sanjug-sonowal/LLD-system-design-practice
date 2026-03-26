#include<iostream>
#include<string>
using namespace std;

class Shape{
public:
    virtual void calculateArea() = 0;
    virtual ~Shape(){};
};

class Rectangle : public Shape{
public:
    double length;
    double breadth;

    Rectangle(double l,double b){
        this->length = l;
        this->breadth = b;
    }

    void calculateArea(){
        cout<<length * breadth<<endl;
    }
};

class Circle : public Shape{
public:
    double radius;
    double PI = 3.14;

    Circle(double radius){
        this->radius = radius;
    }

    void calculateArea(){
        cout<<PI * radius * radius<<endl;
    }
};

int main(){
    Shape* s1 = new Circle(4);
    Shape* s2 = new Rectangle(4,5);

    s1->calculateArea();
    s2->calculateArea();

    delete s1;
    delete s2;

    return 0;
}