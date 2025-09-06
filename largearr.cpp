#include<iostream>
using namespace std;
int main(){
    int arr[]={100,10,5,2,15};
    int n=sizeof(arr)/sizeof(arr[0]);
    int max=arr[0];
    for(int i=1;i<n;i++){
        if(arr[i]>max){
            max=arr[i];
        }
    }
    cout<<"Largest Element: "<<max<<endl;
    return 0;
    


}