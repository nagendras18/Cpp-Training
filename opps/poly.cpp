#include<iostream>
#include<string>
using namespace std;
class Shape{
    public:
    virtual void draw(){
        cout<<"Drawing a shape"<<endl;
    }


};
class Circle:public Shape{
    public:
    void draw() override{
        cout<<"Drawing a circle"<<endl;
    }
};
class Square:public Shape{
    public:
    void draw() override{
        cout<<"Drawing a square"<<endl;
    }
};
void drawAnyShape(Shape& aShape){
    aShape.draw();
}
int main(){
    Circle circle;
    Square square;
    drawAnyShape(circle);
    drawAnyShape(square);
    return 0;
}