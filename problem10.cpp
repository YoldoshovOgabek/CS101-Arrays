//
// Created by Og�Abek Yo�Ldoshov on 11/5/24.
//
#include <iostream>
using namespace std;

int main() {
    string s;
    cin >> s;
    int arr[26] = {0};
    for (int i = 0; i < s.length(); i++) {
        arr[s[i] - 'A']++;
    }
    int cnt = 0;
    for (int i = 0; i < 26; i++) {
        if (arr[i] != 0) cnt++;
    }
    cout << cnt << endl;
}