#include <iostream>
using namespace std;

int main() {
    // not defining the size of the array means you cannot put any more than that number in ever
    string cars[4] = {"Volvo", "BMW", "Ford", "Mazda"};
    int myNum[3] = {10, 20, 30};

    cars[0] = "Toyota";
    for (int i = 0; i < sizeof(cars); i++) {
        cout << cars[i] << "\n";
    }
}