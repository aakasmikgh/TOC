#include <iostream>
#include <regex>
#include <string>
using namespace std;

int main() {
    string input;
    regex phone_expr(R"(\d{10})");
    
    while(true)
    {
        cout << "Enter the phone number: ";
        cin >> input;
        if(!cin) break;
        // Exit when the user inputs 'q'
        if(input == "q")
            break;

        if(regex_match(input, phone_expr))
            cout << "Valid 10-digit phone number" << endl;
        else 
            cout << "Invalid phone number" << endl;
    }
}
