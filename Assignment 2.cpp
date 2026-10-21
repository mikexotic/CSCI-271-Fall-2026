// Michael Surratt Assignment 2 

#include <iostream>
#include <string>
using namespace std;

int main()
{
string name; // declaring variable and that name is stored there
int age; // declaring variable and that age is stored there
cout << "What is your name and age?"; // Displaying question
cin >> name; // outputting name input from keyboard
cin >> age; // outputting age input from keyboard
cout << "Hi, I'm " << name << ". I am " << age << " years old."; // Displaying greeting with name and age 
    return 0;
}