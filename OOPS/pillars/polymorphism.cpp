#include<iostream>
#include<string>
using namespace std;

class Calculator{
public:
    int a;
    int b;
    int c;

    void add(int a,int b){
        cout<<a+b<<endl;
    }

    void add(int a,int b,int c){
        cout<<a+b+c<<endl;
    }
};
int main(){
    Calculator c1;
    c1.add(12,2);
    c1.add(12,3,4);
    
    return 0;
}