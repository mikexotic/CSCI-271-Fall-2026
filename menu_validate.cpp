// Michael Surratt Assignment 4

// Include the input/output library so we can use cin and cout.
#include <iostream>
// Lets us write cin/cout instead of std::cin/std::cout.
using namespace std;

// Every C++ program starts running at main().
int main() {
    // Variable that will hold the menu choice the user types in.
    int choice;

    // "do" starts the loop. The body runs FIRST, and the condition is checked AFTER,
    // so the prompt is guaranteed to show at least once (the key do...while idea).
    do {
        // Ask the user to enter 1, 2, or 3.
        cout << "Enter a menu choice (1, 2, or 3): ";
        // Read the number the user typed and store it in choice.
        cin >> choice;

        // Check for bad data: a choice below 1 OR above 3 is not valid.
        // (|| means "or": only one side has to be true.)
        if (choice < 1 || choice > 3) {
            // Tell the user the choice was wrong; the loop will then re-prompt.
            cout << "Invalid choice, try again." << endl;
        }
    // Go back to "do" while the choice is still invalid.
    // Note the semicolon after the condition: do...while requires it!
    } while (choice < 1 || choice > 3);

    // We only reach this line once a valid choice (1, 2, or 3) was entered.
    // Print which option the user selected.
    cout << "You selected option " << choice << "." << endl;

    // Return 0 to tell the operating system the program finished successfully.
    return 0;
}
