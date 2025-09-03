#include<iostream>
using namespace std;
int main(){
    char playerClass;
    int playerLevel;
    cout<<"Select Your Character Class (W/M/A): "<<endl;
    cout<<"W -> Warrior"<<endl;
    cout<<"M -> Mage"<<endl;
    cout<<"Enter Your Choice: ";
    cout<<"Enter Your Level: ";
    cin>>playerClass;
    cin>>playerLevel;
    switch(playerClass){
        case 'w':
        case 'W':
        cout<<"You have selected Warrior class"<<endl;
        if( playerLevel > 10){
            cout<<"You can use the power Strike ability"<<endl;
        }else{
            cout<<"You can use the basic 'Slash' ability"<<endl;
        }
        break;
        case 'm':
        case 'M':
        cout<<"You have selected Mage class"<<endl; 
        if( playerLevel > 10){
            cout<<"You can use the power Fireball ability"<<endl;
        }else{
            cout<<"You can use the basic 'Magic Missile' ability"<<endl;
        }
        break;
        default:
        cout<<"Invalid Character Class Selected"<<endl;
    

}