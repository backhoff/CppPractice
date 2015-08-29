#include <iostream>

using namespace std;

int main() {
    int p,q;
    cin >> p >> q;
    if ((p || q) && !(p&&q)) cout << 1;
    else cout << 0;

    return 0;
}
