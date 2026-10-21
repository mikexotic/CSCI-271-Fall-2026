// Michael Surratt Assignment 4

#include <iostream> 
using namespace std;

int main() {
// Stores the whole number the user enters
    int number; 

// Prompt the user (no endl, so the cursor stays on the same line)
    cout << "Enter a whole number: ";
// Read the user's input into number
    cin >> number;                   

    // The "for" loop has three parts:
    // start the counter i at 1  
         int i = 1
    //keep looping as long as i is 10 or less   
         i <= 10
    //add 1 to i after each pass
         i++
    for (int i = 1; i <= 10; i++) {
        // Print one line per pass, like "7 x 3 = 21".
        // number i is calculated right inside the output line.
        // endl ends the line so the next result starts on a new one.
        cout << number << " x " << i << " = " << number i << endl;
    }

    return 0;   // 0 tells the operating system the program was completed
}
