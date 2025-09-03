#include<iostream>
using namespace std;
int main(){
    cout<<"Enter Your Marks: ";
    int marks;
    cin>>marks;
    if(marks>=90 && marks<=100){
        cout<<"Your Grade is A+"<<endl;
    }
    else if(marks>=80 && marks<90){
        cout<<"Your Grade is A"<<endl;
    }
    else if(marks>=70 && marks<80){
        cout<<"Your Grade is B+"<<endl;
    }
    else if(marks>=60 ){
        cout<<"Your Grade is B"<<endl;
    }
    else if(marks>=50 && marks<60){
        cout<<"Your Grade is C"<<endl;
    }
    else{
        cout<<"You are Failed"<<endl;
    }
}