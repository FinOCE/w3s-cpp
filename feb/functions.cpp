#include <iostream>
using namespace std;

void myFunction(string name = "Unknown", int age = 0) {
    cout << "Name: " << name << ", Age: " << age << "\n";
}

int fivePlus(int value) {
    return 5 + value;
}

void swapNums(int &x, int &y) {
    int z = x;
    x = y;
    y = z;
}

int plusFunc(int x, int y) {
    return x + y;
}

double plusFunc(double x, double y) {
    return x + y;
}

int main() {
    myFunction("Michael", 55);
    myFunction("Alan", 39);
    myFunction("James", 22);
    myFunction();

    cout << "\n\n";
    cout << fivePlus(10);

    cout << "\n\n";
    int x = 10;
    int y = 20;

    cout << x << " " << y << "\n";

    swapNums(x, y);

    cout << x << " " << y;

    cout << "\n\n";
    cout << plusFunc(10, 20) << "\n";
    cout << plusFunc(1.5, 2.5);

    return 0;
}