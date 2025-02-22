#include <iostream>
using namespace std;

int main() {
    // Declare variables
    int n, t1 = 0, t2 = 1, nextTerm;

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

    // Loop to generate the Fibonacci sequence
    for (int i = 1; i <= n; ++i) {
        // Print the current term
        cout << t1 << " ";

        // Calculate the next term
        nextTerm = t1 + t2;

        // Update the values of t1 and t2 for the next iteration
        t1 = t2;
        t2 = nextTerm;
    }

    cout << endl; // Move to the next line after printing the sequence
    return 0; // Indicate successful program termination
}