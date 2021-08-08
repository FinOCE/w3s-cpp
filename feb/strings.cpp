#include <iostream>
using namespace std;
#include <string>

int main() {
    string firstName = "Michael ";
    string lastName = "Contoso";
    //string fullName = firstName + lastName;
    string fullName = firstName.append(lastName);
    cout << fullName;

    cout << "\n\n";
    string txt = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    cout << "The length of the txt string is " << txt.length();
    // .length() and .size() are the same

    cout << "\n\n";
    string myString = "Hello";
    myString[0] = 'J';
    cout << myString[0];

    cout << "\n\n";
    string myName;
    cout << "Type your full name: ";
    getline (cin, myName);
    cout << "Your full name is: " << myName;

    // Instead of using line 2 "using namespace std;" can just do "std::cout << myName;"
}