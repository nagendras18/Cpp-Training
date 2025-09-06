#include<iostream>
#include<string>
using namespace std;
int main(){
    int number=50;
    int *pNumber;
    cout<<"value of number: "<<number<<endl;
    cout<<"Address of number: "<<&number<<endl;
    cout<<"---------------------------------"<<endl;
    pNumber=&number;
    cout<<"Value of pNumber: "<<pNumber<<endl;
    cout<<"Address of pNumber: "<<&pNumber<<endl;
    cout<<"Value at address stored in pNumber: "<<*pNumber<<endl;
    cout<<"---------------------------------"<<endl;
    cout<<"Before changing value using pointer"<<endl;
    cout<<"Value of number: "<<number<<endl;    
    *pNumber=100;
    cout<<"After changing value using pointer"<<endl;
    cout<<"Value of number: "<<number<<endl;
    return 0;       

}