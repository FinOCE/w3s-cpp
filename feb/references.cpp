#include <iostream>
using namespace std;

int main() {
    string food = "Pizza";
    string &meal = food;

    cout << food << "\n";
    cout << meal << "\n\n";

    string* ptr = &food;
    cout << food << "\n";
    cout << &food << "\n";
    cout << ptr << "\n";
    cout << *ptr << "\n";
    *ptr = "Hamburger";
    cout << food << "\n";
}