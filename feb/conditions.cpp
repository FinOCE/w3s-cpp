#include <iostream>
using namespace std;

int main() {
    int x = 10;
    int y = 9;
    cout << "\n\n";
    if (x > y) {
        cout << "x is greater than y";
    } else if (x < y) {
        cout << "x is less than y";
    } else {
        cout << "x and y are the same";
    }

    cout << "\n\n";
    int time = 20;
    cout << ((time < 18) ? "Good day" : "Good evening");

    cout << "\n\n";
    int day = 4;
    switch (day) {
        case 6:
            cout << "Today is Saturday";
            break;
        case 7:
            cout << "Today is Sunday";
            break;
        default:
            cout << "Looking forward to the weekend";
    }

    // while loops work as you expect, but do/while loops are the same but iterate at least once
    cout << "\n\n";
    int i = 0;
    do {
        cout << "Do loop :) \n";
        i++;
    }
    while (i < 5);

    cout << "\n\n";
    for (int i = 0; i < 5; i++) {
        if (i == 2) {
            continue;
        }
        // can also use "break;" to end for loop there
        cout << i << "\n";
    }
}