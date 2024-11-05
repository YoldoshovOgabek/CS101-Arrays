//
// Created by Og�Abek Yo�Ldoshov on 11/5/24.
//
#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "n="; cin >> n;
    char arr[n];
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    int u=0,l=0,d=0,s=0;
    for (int i = 0; i < n; i++) {
        if('A' <= arr[i] && arr[i] <= 'Z')u++;
        else if('a' <= arr[i] && arr[i] <= 'z')l++;
        else if('0' <= arr[i] && arr[i] <= '9')d++;
        else s++;
    }
    cout << "Uppercase: " << u << endl;
    cout << "Lowercase: " << l << endl;
    cout << "Digit: " << d << endl;
    cout << "Special: " << s << endl;
    return 0;
}