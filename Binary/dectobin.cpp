
#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    int ans = 0;
    int place = 1;

    while (n != 0) {
        int bit = n & 1;
        ans += bit * place;
        place *= 10;
        n = n >> 1;
    }

    cout << ans << endl;
    return 0;
}
