#include<iostream>
#include<vector>
using namespace std;
void bubbleSort(vector<int>& arr) {
    int n = arr.size();
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                int temp = arr[j];
                arr[j] = arr[j + 1];    
                arr[j + 1] = temp;  
            }
        }
    }
}
void printVector(const vector<int>& arr) {
    for (int num : arr) {
        cout << num << " ";
    }
    cout << endl;
}
int main() {
    vector<int> numbers = {64, 34, 25, 12, 22, 11, 90};
    cout << "Unsorted array: ";
    printVector(numbers);
    bubbleSort(numbers);
    cout << "Sorted array: ";
    printVector(numbers);
    return 0;
}