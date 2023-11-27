#include <iostream>
using namespace std;

// Inline function to calculate the square of a number
inline int square(int num) {
    return num * num;
}

int main() {
    int number = 5;
    
    // Calling the inline function square directly
    cout << "Square of " << number << " is: " << square(number) << endl;

    return 0;
}
