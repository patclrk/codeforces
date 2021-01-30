#include <iostream>
#include <math.h>
using namespace std;
int main() {
    // two integers, MxN board size
    // 1 <= N <= M < = 16
    // determine number of dominos that can be placed on board

    // if N is even, N*M/2

    // floor(N*M/2)
    // unable to submit?
    int m, n;
    cin >> n >> m;

    if (n % 2 == 0){
        cout << n * m / 2;
    } else {
        cout << floor(n * m / 2);
    }

    return 0;
}