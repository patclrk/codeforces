#include <iostream>
#include <string>
using namespace std;
int main() {

    string a, b;
    cin >> a >> b;
    //cout << a << endl << b << endl;

    // get scores
    int scores[stoi(a)];

    for (int i = 0; i < stoi(a); i++) {
        string score;
        cin >> score;
        scores[i] = stoi(score);
    }

    //loop through scores
    int threshold = scores[stoi(b)-1];
    int ans = 0;
    for (int i = 0; i < stoi(a); i++) {
        if (scores[i] >= threshold && scores[i] > 0) {
            ans++;
        }
    }

    cout << ans;
    return 0;
}