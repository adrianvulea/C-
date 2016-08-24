#include <iostream>
#include <string>

using namespace std;

int main()
{


    string name;
    while ( name != "-1")

    {
    cout << "Enter name, plz: ";

    cin >> name;

    const string greeting = "Hello, " + name + "!";

    const string spaces(greeting.size(), ' ');
    const string second = "* " + spaces + " *";

    const string first(second.size(), '*');

    cout << first << endl;
    cout << second << endl;
    cout << "* " + greeting + " *" << endl;
    cout << second << endl;
    cout << first << endl;
    }
    return 0;
}
