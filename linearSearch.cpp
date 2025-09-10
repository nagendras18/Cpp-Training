#include<iostream>
using namespace std;
int linearSearch(int arr[],int size,int key){
    for(int i=0;i<size;i++){
        if(arr[i]==key){
            return i;
        }
    }
    return -1;
}
int main(){
    int arr[]={10,20,30,-8,75,15,40,50,101};
    int size=sizeof(arr)/sizeof(arr[0]);
    int key_to_find_1=30;
    int result=linearSearch(arr,size,key_to_find_1);
    
    cout<<"Searching for element: "<<key_to_find_1<<endl;
    if(result!=-1){
        cout<<"Element found at index: "<<result<<endl;
    }else{
        cout<<"Element not found in the array."<<endl;
    }
    cout<<"\n -------------------------------- \n"<<endl;
    int key_to_find_2=100;
    int result2=linearSearch(arr,size,key_to_find_2);

    cout<<"Searching for element: "<<key_to_find_2<<endl;
    if(result2!=-1){
        cout<<"Element found at index: "<<result2<<endl;
    }else{
        cout<<"Element not found in the array."<<endl;
    return 0;
}
}