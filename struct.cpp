#include<iostream>
#include<iomanip>
using namespace std;
struct emp{
    string name="Nagendra";
    int age=21;
    float salary=500.5;
    double price=50000.50;
};
struct cars{
    string brand="BMW";
    int year=2023;
    float mileage=15.5;
    double price=5000000.50;
};
struct books{
    string title="C++ Programming";
    string author="Bjarne Stroustrup";
    int pages=1376;
    double price=1999.99;
};
struct movies{
    string title="Inception";
    string director="Christopher Nolan";
    int duration=148;
    double rating=8.8;
};
int main(){
    emp e;
    cars c;
    books b;    
    movies m;
    cout<<setw(20)<<e.name<<setw(10)<<e.age<<setw(15)<<e.salary<<e.price<<endl;
    cout<<setw(20)<<c.brand<<setw(10)<<c.year<<setw(15)<<c.mileage<<c.price<<endl;
    cout<<setw(20)<<b.title<<setw(20)<<b.author<<setw(10)<<b.pages<<b.price<<endl;
    cout<<setw(20)<<m.title<<setw(20)<<m.director<<setw(10)<<m.duration<<m.rating<<endl;
    return 0;
}