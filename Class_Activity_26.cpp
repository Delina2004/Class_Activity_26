#include <iostream>
#include "Point.hpp"
using namespace std;

int main() {
    Point p1{ 3, 4 };
    Point p2{ 3, 4 };
    Point p3{ 5, 6 };

    if (p1 == p2) {
        cout << "p1 and p2 are equal." << endl;
    }
    else {
        cout << "p1 and p2 are not equal." << endl;
    }

    if (p1 == p3) {
        cout << "p1 and p3 are equal." << endl;
    }
    else {
        cout << "p1 and p3 are not equal." << endl;
    }

  
    cout << "Point p1: " << p1 << endl;
    cout << "Point p2: " << p2 << endl;
    cout << "Point p3: " << p3 << endl;

    return 0;
}
