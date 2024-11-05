//
// Created by Og�Abek Yo�Ldoshov on 11/5/24.
//
#include <iostream>
#include <string>
using namespace std;

int romanToInt(const string& s) {
    char roman_chars[] = {'I', 'V', 'X', 'L', 'C', 'D', 'M'};
    int roman_values[] = {1, 5, 10, 50, 100, 500, 1000};

    int result = 0;
    int n = s.length();

    for (int i = 0; i < n; i++) {
        int current_value = 0;
        int next_value = 0;

        for (int j = 0; j < 7; j++) {
            if (s[i] == roman_chars[j]) {
                current_value = roman_values[j];
                break;
            }
        }

        if (i + 1 < n) {
            for (int j = 0; j < 7; j++) {
                if (s[i + 1] == roman_chars[j]) {
                    next_value = roman_values[j];
                    break;
                }
            }
        }

        if (current_value < next_value) {
            result -= current_value;
        } else {
            result += current_value;
        }
    }

    return result;
}

int main() {
    string roman;
    cin >> roman;

    int integer_value = romanToInt(roman);
    cout << integer_value << endl;

    return 0;
}
