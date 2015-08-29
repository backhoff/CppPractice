#include <iostream>

using namespace std;


int main () {

    int t;
    cin >> t;

    for (int i = 1; i <=t; i++) {
        int l,c;
        cin >> l >> c;
        for (int j = 1; j <= l; j++) {
                if ((j%2)>= 1) {
                        for (int k = 1; k <= c; k++){
                                if (k%2) {
                                    cout << "*";
                                }
                                else {
                                    cout << ".";
                                }
                        }

                        cout << endl;
                      }
                else {
                    for (int k = 1; k <= c; k++){
                                if (k%2) {
                                    cout << ".";
                                }
                                else {
                                    cout << "*";
                                }
                        }

                        cout << endl;
                }
                    }
        }

return 0;
}
