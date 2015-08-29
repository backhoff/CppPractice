#include <iostream>

using namespace std;

int main() {
    int t;
    cin >> t;

    for (int i = 1; i <= t; i++) {
        int t,x,y;
        cin >> t >> x >> y;

        for (int j = 1; j <= t; j++) {
            if ((j%x == 0) && (j%y != 0)){
                cout << j << " ";
            }
        }

        cout << endl;
    }



    return 0;
}
