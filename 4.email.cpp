#include <iostream>
#include <regex>
#include <string>
using namespace std;

int main() {
    string input;
    regex email_expr(R"([a-zA-Z0-9._%+-]+@[a-zA-Z0-9.-]+\.[a-zA-Z]{2,})");
    
    while(true)
    {
        cout << "Enter the email: ";
        cin >> input;
        if(!cin) break;
        // Exit when the user inputs 'q'
        if(input == "q")
            break;

        if(regex_match(input, email_expr))
            cout << "Valid email address" << endl;
        else 
            cout << "Invalid email address" << endl;
    }
}

