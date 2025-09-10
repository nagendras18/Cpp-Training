#include<iostream>
using namespace std;
class Shape{
    private:
    int salary;
    public:
    virtual double area()=0; // pure virtual function
};
class Rectangle:public Shape{
    private:
    double length;
    double width;
    public:
    Rectangle(double l,double w):length(l),width(w){}
    double area() override{
        return length*width;
    }
};
int main(){
    Rectangle rect(5.0,3.0);
    cout<<"Area of Rectangle: "<<rect.area()<<endl;
    return 0;
}