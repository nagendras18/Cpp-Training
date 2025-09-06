#include<iostream>
using namespace std;
int main(){
    int arr[10];
    int n=10;
    cout<<"Enter 10 numbers: ";
    for(int i=0;i<n;i++){   
        cin>>arr[i];
    }
    cout<<" even number are"<<endl;
    for(int i=0;i<n;i++){
        if(arr[i]%2==0){
            cout<<arr[i]<<" ";
        }

    }
    cout<<"Sum of all numbers: ";
    int sum=0;
    for(int i=0;i<n;i++){
        sum+=arr[i];
    }
    cout<<sum<<endl;

    return 0;
}
