#include <iostream>
#include <string>

using namespace std;

int main()
{
    string fname = "";
    cout << "What is your first name?\n";
    getline(cin, fname);

    string lname = "";
    cout << "What is your last name?\n";
    getline(cin, lname);

    cout << "Your full name is: " << fname << " ";
    cout << lname << ".\n";

}
