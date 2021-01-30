#include <iostream>
#include <string>
using namespace std;
int main() {
    // first input: int, number of lines (loop control)
    // init value  = 0
    // series of statments, ++ = incerement, -- = decrement
    int a;
    cin >> a;
    
    int x = 0;
    string arg;
    for (int i = 0; i < a; i++) {
        cin >> arg;
        if (arg.find("+") != string::npos) {
            x++;
        }
        else {
            x--;
        }
    }
    cout << x << endl;

    return 0;
}