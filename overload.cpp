#include <iostream>
#include <vector>
using namespace std;

// Function Overloading Examples
void displayValue(int num) {
    cout << "Displaying an integer: " << num << endl;
}

void displayValue(double num) {
    cout << "Displaying a double: " << num << endl;
}

void displayValue(string text) {
    cout << "Displaying a string: \"" << text << "\"" << endl;
}

void displayValue(int num1, int num2) {
    cout << "Displaying two integers: " << num1 << " and " << num2 << endl;
}

void displayValue(vector<int> numbers) {
    cout << "Displaying a vector of integers: ";
    for (int num : numbers) {
        cout << num << " ";
    }
    cout << endl;
}

int main() {
    cout << "--- Calling Overloaded Functions ---" << endl;

    displayValue(100);               // Integer
    displayValue(3.56);              // Double
    displayValue("Hello C++!");      // String
    displayValue(50, 200);           // Two integers

    vector<int> myNumbers = {10, 20, 30, 40, 50};
    displayValue(myNumbers);         // Vector of integers

    return 0;
}