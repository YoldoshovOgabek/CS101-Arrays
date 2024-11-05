//
// Created by Og�Abek Yo�Ldoshov on 11/5/24.
//
#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {
    int counts[6] = {0};
    srand(time(0));

    int rolls = 10000;
    for (int i = 0; i < rolls; i++) {
        int roll = rand() % 6 + 1;
        counts[roll - 1]++;
    }

    for (int i = 0; i < 6; i++) {
        cout << "Face " << (i + 1) << " occurred " << counts[i] << " times." << endl;
    }

    return 0;
}
