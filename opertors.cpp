#include <iostream>
#include <cmath> // For pow function
using namespace std;

int main() {
    int a = 10, b = 5;
    bool x = true, y = false;
    int p = 15, q = 20;

    // Arithmetic Operators
    cout << "Arithmetic Operators:\n";
    cout << "Addition: " << a + b << "\n";
    cout << "Subtraction: " << a - b << "\n";
    cout << "Multiplication: " << a * b << "\n";
    cout << "Division: " << a / b << "\n";
    cout << "Modulus: " << a % b << "\n";
    cout << "Exponentiation: " << pow(a, b) << "\n";
    cout << "Floor Division: " << a / b << "\n\n";

    // Logical Operators
    cout << "Logical Operators:\n";
    cout << (x && y) << "\n";
    cout << (x || y) << "\n";
    cout << (!x) << "\n";
    cout << (!y) << "\n\n";

    // Relational Operators
    cout << "Relational Operators:\n";
    cout << (p == q) << "\n";
    cout << (p != q) << "\n";
    cout << (p > q) << "\n";
    cout << (p < q) << "\n";
    cout << (p >= q) << "\n";
    cout << (p <= q) << "\n";

    return 0;
}
