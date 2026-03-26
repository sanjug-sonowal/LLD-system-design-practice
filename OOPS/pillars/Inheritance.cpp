#include<iostream>
#include<string>
using namespace std;

class Vehicle{
protected:
    string color;
    int speed;

public:
    void setColor(string color){
        this->color = color;
    }

    void getColor(){
        cout<<"Color is : "<<color<<endl;
    }

    void setSpeed(int speed){
        this->speed = speed;
    }

    void getSpeed(){
        cout<<"Speed : "<<speed<<"/hr"<<endl;
    }

};

class Bike : public Vehicle{
private:
    int wheel;
    int model;
public:
    void setWheel(int wheel){
        this->wheel = wheel;
    }

    void getWheel(){
        cout<<"Wheel : "<<endl;
    }

    void setModel(int model){
        this->model = model;
    }

    void getModel(){
        cout<<"Model : "<<model<<endl;
    }
};

int main(){
    Bike b1;
    b1.setColor("Blue");
    b1.setModel(3456);
    b1.setSpeed(345);
    b1.getSpeed();
    b1.getColor();
    b1.getModel();
    return 0;
}