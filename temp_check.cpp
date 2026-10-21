// Michael Surratt Assignment 3

#include <iostream>
using namespace std;

int main()
{
    
int temperature;

//ask for temperature as an integer
cout << "What is the temperature?(F): ";
cin >> temperature;

// Use if/else if/else chain to classify temperature
if (temperature >= 76) {
cout << "That's Hot!";
} else if (temperature >= 60) {
cout << "That's not too bad!";
} else if (temperature >= 32) {
cout << "You should wear a heavy jacket!";
} else {
cout << "Be sure to button up!";
}
    return 0;
}