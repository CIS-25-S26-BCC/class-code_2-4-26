#include <iostream>
#include <string>

using namespace std;

int main() {
   int points;
   string name;
   string name2;

   cout << "How many points do you have?????";
   getline(cin, points);
   // captures the number, leaves the "enter" (newline character) "on the table" (in the buffer)

   cout << "What is your FULL NAME?";
   // buffer now looks like this: "\nWhat is your FULL NAME?"
//    cin.ignore();
   getline(cin, name);
   // getline starts reading from the buffer and stops as soon as it hits a newline character
   // SKIPS everything after that!
   // What remains in the buffer: "What is your FULL NAME?"
   getline(cin, name2);
   // let's capture that part.

   // Output should be Hello, [name]! The computer has seen fit to assign you [points] points.
   cout << "Hello, " << name << "! The computer has seen fit to assign you " << points << " points." << endl;

   cout << "Here's what's in name2: " << name2 << endl;

   return 0;

}

