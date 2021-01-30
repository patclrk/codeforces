#include <iostream>
#include <string>
using namespace std;
int main() {
    int a;
    cin >> a;
    string words[a];

    // input
    for (int i = 0; i < a; i++) {
        string word;
        cin >> word;
        words[i] = word;
    }

    // output
    for (int i = 0; i < a; i++) {
        if (words[i].length() > 10) {
            cout << words[i][0] + to_string(words[i].length()-2) + words[i][words[i].length()-1];
        }
        else {
            cout << words[i];
        }
        cout << "\n";
    }
    return 0;
}