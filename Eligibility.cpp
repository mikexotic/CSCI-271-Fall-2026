// Michael Surratt Assignment 3

#include <iostream>
using namespace std;

int main()
{
cout << "Let's see if you qualify for a discount(s)!" << endl;
int age;
int isMember;

// Ask user for their age as an integer
cout << "What is your age?: ";
cin >> age;
// Ask user if they are a member as an integer
cout << "Are you a member with us? (1 = yes, 0 = no): ";
cin >> isMember;

// Using if/ else chain to identify user's qualification
if (age >= 60 || age >= 18 && isMember) {
cout << "Congratulations, you qualify!";
} else {(cout << "Unfortunately, you don't qualify.");
}
    return 0;
}