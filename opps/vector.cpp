#include <iostream>
#include <vector>
#include <string>
using namespace std;

// Function to print a vector with a label
void printVector(const string& label, const vector<int>& vec) {
    cout << label << " (size = " << vec.size() << "): ";
    for (const auto& element : vec) {
        cout << element << " ";
    }
    cout << endl;
}

int main() {
    vector<int> numbers;
    vector<string> fruits = { "Apple", "Banana", "Cherry" };
    vector<int> ten_fives(5, 10);  // Vector of size 5, all elements are 10

    printVector("ten_fives", ten_fives);

    // Pushing elements to 'numbers' vector
    numbers.push_back(10);
    numbers.push_back(20);
    numbers.push_back(30);

    printVector("numbers", numbers);

    cout << "First fruit: " << fruits[0] << endl;

    return 0;
}