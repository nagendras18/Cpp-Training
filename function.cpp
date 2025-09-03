#include<iostream>
#include<iomanip>
using namespace std;
int sum(int a, int b){
    cout<<"sum of two numbers: "<<setw(15)<<a+b<<endl;
    return a+b;

}
int main(){
    sum(10,20);
    sum(30,40);
    return 0;
}