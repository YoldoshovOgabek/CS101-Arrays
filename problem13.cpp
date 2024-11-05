//
// Created by Og�Abek Yo�Ldoshov on 11/5/24.
//
#include <iostream>
#include <string>
using namespace std;

int main() {
    string s;
    cin >> s;
    int u=0, l=0;
    for(char i : s) {
        if('A'<=i && i<='Z') u++;
        else if('a'<=i && i<='z') l++;
    }
    if(u<l) {
        for(char i : s) {
            if('A'<=i && i<='Z') cout << char(i+32);
            else cout << i;
        }
    }else {
        for(char i : s) {
            if('a'<=i && i<='a') cout << char(i-32);
            else cout << i;
        }
    }
}