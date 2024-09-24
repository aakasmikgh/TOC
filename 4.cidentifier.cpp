#include <iostream>
#include <regex>
#include <string>
using namespace std;

int main() {
    string input;
    regex identifier_expr("[a-zA-Z_][a-zA-Z0-9_]*");
    // As long as the input is correct, ask for another number
    while(true)
    {
        cout << "Enter the input: ";
        cin >> input;
        if(!cin) break;
        // exit when the user inputs q
        if(input == "q")
            break;
        if(regex_match(input, identifier_expr))
            cout << "Input is an identifier" << endl;
        if (regex_match(input.begin(), input.end(), identifier_expr )) 
            cout << "range matched\n";
        else 
            cout << "Invalid input : Not an identifier" << endl;
        smatch sm;
        regex_match(input, sm, identifier_expr);
        cout << "string object with " << sm.size() << " matches\n";
        for (unsigned i = 0; i < sm.size(); ++i) 
            cout << "[" << sm[i] << "]\n";
        cout << endl;
    }
}

