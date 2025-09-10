#include<iostream>
using namespace std;
class car{
    public:
    string brand;
    string model;
    int year;
    void honk(){
        cout<<"Beep beep!"<<endl;
    }
};
int main(){
    car carObj1;
    carObj1.brand="BMW";
    carObj1.model="X5";
    carObj1.year=1999;
    cout<<carObj1.brand<<" "<<carObj1.model<<" "<<carObj1.year<<endl;
    carObj1.honk();
    return 0;
}