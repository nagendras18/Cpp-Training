#include<iostream>
#include<vector>
using namespace std;
void selectSort(vector<int>& arr) {
    int n = arr.size();
    for (int i = 0; i < n - 1; i++) {
        int minIndex = i;
        for (int j = i + 1; j < n; j++) {
            if (arr[j] < arr[minIndex]) {
                minIndex = j;
            }
        }
        if (minIndex != i) {
            swap(arr[i], arr[minIndex]);
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
    vector<int> numbers = {64, 25, 12, 22, 11};
    cout << "Unsorted array: ";
    printVector(numbers);
    selectSort(numbers);
    cout << "Sorted array: ";
    printVector(numbers);
    return 0;
}