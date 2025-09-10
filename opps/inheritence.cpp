#include<iostream>
#include<string>
using namespace std;
class vehicle{
    public:
    string brand;
    virtual void honk(){
        cout<<"Beep beep!"<<endl;

    }
};
class Car:public vehicle{
    public:
    string model="Mustang";
};
int main(){
    Car mycar;
    mycar.honk();
    cout<<mycar.brand+" "+mycar.model<<endl;
    return 0;
}