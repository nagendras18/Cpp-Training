#include <iostream>
using namespace std;
class Myclass{
    public:
    Myclass(){
        cout<<"MyClass object is created!"<<endl;
    }
    ~Myclass(){
        cout<<"MyClass object is destroyed!"<<endl;
    }
};
int main(){
    {
        Myclass obj1;
    } // obj1 goes out of scope here, and destructor is called
    cout<<"End of main function."<<endl;
    return 0;
}
