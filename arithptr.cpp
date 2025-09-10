#include<iostream>
using namespace std;
int main(){
    int numbers[]={10,20,30,40,50};
    int* ptr=numbers; 
    cout<<"--- Initial State ---"<<endl;
    cout<<"Pointer 'ptr' points to address:"<<ptr<<endl;
    cout<<"value at the address(*ptr):"<<*ptr<<endl;
    ptr++;

    cout<<"--- After ptr++ ---"<<endl;
    cout<<"Pointer 'ptr' now points to address:"<<ptr<<endl;
    cout<<"value at the new address(*ptr):"<<*ptr<<endl;
    ptr--;

    cout<<"--- After ptr-- ---"<<endl;
    cout<<"Pointer 'ptr' now points to address:"<<ptr<<endl;
    cout<<"value at the new address(*ptr):"<<*ptr<<endl;
    int* ptr2=numbers+3;

    cout<<"Pointer 'ptr2' points to address:"<<ptr2<<endl;
    cout<<"-- Aftyer ptr2 = numbers+3 ---"<<endl;
    cout<<"Value at the address (*ptr2)"<<*ptr2<<endl;
    int* ptr3=ptr2-2;

    cout<<"-- Aftyer ptr3 = ptr2-2 ---"<<endl;
    cout<<"Pointer 'ptr3' points to address:"<<ptr3<<endl;
    cout<<"Value at the address (*ptr3)"<<*ptr3<<endl;
    long difference=ptr2-ptr;
    
    cout<<"-- After difference = ptr2 -ptr ---"<<endl;
    cout<<"The number of elements between ptr2 and ptr is:"<<difference<<endl;
    return 0;




}