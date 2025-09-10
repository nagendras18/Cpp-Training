#include<iostream>
using namespace std;
void modifyValue(int& num){
    cout<<" Inside function (start): num="<<num<<endl;
    num=50;
    cout<<" Inside function(end): num="<<num<<endl;
}
int main(){
    int my_number=10;
    cout<<"before calling function: my_number = "<<my_number<<endl;
    modifyValue(my_number);
    cout<<"After calling function: my_number = "<<my_number<<endl;
    return 0;
}