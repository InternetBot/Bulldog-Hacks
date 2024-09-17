#include <iostream>
#include <string>

//invoking std namespace for readablity
using namespace std;


int main(){
    //the flag you're looking for
    string flag = "flag{Cracked}";
    //the password to get the flag
    string key = "opensesame";
    string input;
    
    //user input for the password
    cout << "What is the passphrase?: ";
    cin >> input;

    //simple if statement for the password
    if (input == "opensesame"){
        cout << flag << endl;
    } else {
        cout << "Wrong key" << endl;
    }

    return 0;
}
