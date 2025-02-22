#include <iostream>  // Include the input-output stream library

using namespace std;

// Recursive function to calculate factorial
long long factorial(int n) {
    if (n == 0 || n == 1) // Base case: factorial of 0 or 1 is 1
        return 1;
    return n * factorial(n - 1); // Recursive call
}

int main() {
    int num;

    // Prompt the user to enter a number
    cout << "Enter a positive integer: ";
    cin >> num;

    // Check if the number is negative
    if (num < 0) {
        cout << "Factorial is not defined for negative numbers.\n";
    } else {
        // Call the recursive function and display the result
        cout << "Factorial of " << num << " is: " << factorial(num) << endl;
    }

    return 0; // Indicate successful program termination
}
