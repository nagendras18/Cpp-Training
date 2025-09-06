#include<iostream>
#include<string>
using namespace std;
int main(){
    char name[]= {'N','A','G','E','N','D','R','A','\0'};
    string first_name="NAGENDRA";
    string last_name="KUMAR";
    string greet="I love C++ programming";
    cout<<"Name: "<<name<<endl;
    int l=(sizeof(name)-1);
    cout<<"Length of Name: "<<l<<endl;
    cout<<"First Name: "<<first_name<<endl;
    cout<<"Last Name: "<<last_name<<endl;
    string full_name=first_name+" "+last_name;
    int lngth=full_name.length();
    cout<<"Length of Full Name: "<<lngth<<endl;
    cout<<"Cancatinated Name: "<<full_name<<endl;
    cout<<greet<<endl;
    int check=greet.find("C++");
cout<<"Position of C++: "<<check<<endl;
    return 0;
}