/*The program gets the name of a user, formulates a greeting and then
incapsulates it into asterixes as such:
                *******
                *     *
                * Adi *
                *     *
                *******
*/
#include <iostream>
#include <string>

using namespace std;

int main()
{

    // initialize name variable
    string name;
    // escape character
    while ( name != "-1")

    {
    
    cout << "Enter name, plz: ";
    cin >> name;
    // formulating greeting
    const string greeting = "Hello, " + name + "!";
    // building components of the output one piece at a time
    const string spaces(greeting.size(), ' ');
    const string second = "* " + spaces + " *";

    const string first(second.size(), '*');
    // putting everything together
    cout << first << endl;
    cout << second << endl;
    cout << "* " + greeting + " *" << endl;
    cout << second << endl;
    cout << first << endl;
    }
    return 0;
}
