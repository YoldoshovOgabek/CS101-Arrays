//
// Created by Og�Abek Yo�Ldoshov on 11/5/24.
//
#include <iostream>
using namespace std;

int indexOfLargestElement(double arr[], int size) {
    if(size <= 0) return -1;
    int largest = arr[0];
    int inx = 0;
    for(int i = 1; i < size; i++) {
        if(arr[i] > largest) {
            largest = arr[i];
            inx = i;
        }
    }
    return inx;
}

int main() {
    double arr[15];
    cout << "Enter 15 numbers: ";
    for (int i = 0; i < 15; i++) {
        cin >> arr[i];
    }
    cout << indexOfLargestElement(arr, 15) << endl;
}