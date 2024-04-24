#include<iostream>
using namespace std;

int main() {
    int Intvalue;

    while (true) {
        cout << "Enter an integer value between 5 and 10: ";
        cin >> Intvalue;

        if (Intvalue >= 5 && Intvalue <= 10) {
            cout << "Your integer value " << Intvalue << " has been accepted.\n";
            break; // Exit the loop if the input is valid
        } else {
            cout << "Sorry, you have entered an invalid number. Please try again.\n";
           cin >> Intvalue; 
           
        }
    }

    return 0;
}
