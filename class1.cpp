#include <iostream>
#include <string> // For std::string
using namespace std;

// Car class
class Car {
public:
    string brand;
    string model;
    int year;
    int speed;

    void displayInfo() {
        cout << "Brand: " << brand 
             << ", Model: " << model 
             << ", Year: " << year 
             << ", Speed: " << speed << " km/h" << endl;
    }

    void accelerate(int value) {
        speed += value;
        cout << brand << " accelerated to " << speed << " km/h" << endl;
    }

    void brake(int value) {
        speed -= value;
        if (speed < 0) speed = 0;
        cout << brand << " slowed down to " << speed << " km/h" << endl;
    }
};

int main() {
    // Create an object of the Car class
    Car myCar;

    // Access and set data members for myCar
    myCar.brand = "Toyota";
    myCar.model = "Camry";
    myCar.year = 2022;
    myCar.speed = 0; // Initial speed

    // Call member functions for myCar
    myCar.displayInfo();
    myCar.accelerate(50);
    myCar.brake(20);

    cout << endl; // For better readability

    // Create another object of the Car class
    Car yourCar;

    yourCar.brand = "Honda";
    yourCar.model = "Civic";
    yourCar.year = 2023;
    yourCar.speed = 0;

    yourCar.displayInfo();
    yourCar.accelerate(70);
    yourCar.accelerate(30);
    yourCar.brake(60);

    return 0;
}