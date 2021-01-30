#include <iostream>
#include <string>
using namespace std;
int main() {
    string a, b;
    cin >> a >> b;

    int ans = 0;
    for (string::size_type i = 0; i < a.size(); ++i) {
        if (tolower(a[i]) > tolower(b[i])) {
            ans++;
            break;
        }
        else if (tolower(a[i]) < tolower(b[i])) {
            ans--;
            break;
        }
        else {
            continue;
        }
    }

    cout << ans << endl;

    return 0;
}