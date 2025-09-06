#include<iostream>
using namespace std;
int main(){
    int matrix[3][4]={
        {1,2,3,4},
        {5,6,7,8},
        {9,10,11,12}
    };
    cout<<"Matrix Elements: "<<endl;
    for(int i=0;i<3;i++){
        for(int j=0;j<4;j++){
            cout<<matrix[i][j]<<" \t ";
        }
        cout<<endl;
    }
    cout<<"Element at (2,3): "<<matrix[1][2]<<endl;
    matrix[0][0]=20;
    cout<<"Updated Element at (3,4): "<<matrix[0][0]<<endl;
    cout<<"Updated Matrix Elements: "<<endl;
    for(int i=0;i<3;i++){
        for(int j=0;j<4;j++){
            cout<<matrix[i][j]<<" \t ";
        }
        cout<<endl;
    }   
    return 0;
}