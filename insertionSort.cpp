#include<iostream>
#include<vector>
using namespace std;
void insertionSort(vector<int>& arr) {
    int n = arr.size();
    for (int i = 1; i < n; i++) {
        int key = arr[i];
        int j = i - 1;
        while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
            j=j-1;
        }
        arr[j + 1] = key;
    }

}
void printVector(const vector<int>& arr) {
    for (int num : arr) {
        cout << num << " ";
    }
    cout << endl;
}
int main() {
    vector<int> numbers = {12, 11, 13, 5, 6};
    cout << "Unsorted array: ";
    printVector(numbers);
    insertionSort(numbers);
    cout << "Sorted array: ";
    printVector(numbers);
    return 0;
}