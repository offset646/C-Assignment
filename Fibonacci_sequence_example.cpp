#include <iostream>
using namespace std;

// Function to calculate the nth Fibonacci number recursively
int fibonacci(int n) {
    if (n <= 1) {
        return n; // base case
    }
    return fibonacci(n - 1) + fibonacci(n - 2);
}

int main() {
    // Declare variable
    int n;

    // Prompt the user to enter the number of terms
    cout << "Enter the number of terms for the Fibonacci sequence: ";
    cin >> n;

    // Check if the input is valid (must be a positive integer)
    if (n <= 0) {
        cout << "Please enter a positive integer." << endl;
        return 1; // Exit the program with an error code
    }

    // Display the Fibonacci sequence
    cout << "Fibonacci Sequence up to " << n << " terms:" << endl;

    // Loop to generate and print the Fibonacci sequence
    for (int i = 0; i < n; ++i) {
        cout << fibonacci(i) << " ";
    }

    cout << endl; // Move to the next line after printing the sequence
    return 0; 
}
