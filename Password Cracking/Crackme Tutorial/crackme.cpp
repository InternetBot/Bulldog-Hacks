#include <iostream>
#include <string>

using namespace std;


int main(){
    string Flag = "Flag{Cracked}";
    string key = "opensesame";
    string input;
    cout << "What is the passphrase?: ";
    cin >> input;

    if (input == "opensesame"){
        cout << Flag << endl;
    } else {
        cout << "Wrong key" << endl;
    }

    return 0;
}
