#include <iostream>

using namespace std;

int main() {
    int t, i, j, k;
    cin >> t;
    cout << "\n";
    // Iterate for T Cases
    for (i = 1; i <= t; i ++) {
        int ng, nm;
        // Ask for army size
        cin >> ng >> nm;

        // Arrays to Store Monster Strength
        int g[ng];
        int m[nm];



        // Loop to ask godzilla monster strengths
        for (j = 0; j < ng; j++) {
            cin >> g[j];
        }
        //Loop to ask for mechagodzilla monster strengths
        for (k = 0; k < nm; k++ ) {
            cin >> m[k];
        }


        int m1 = g[0];
        int m2 = m[0];

        // Find smallest in godzillas army
        for (j =1; j < ng; j++) {
            if (m1<g[j])
            m1=g[j];
        }

        // Find smallest in Mechas army
        for(j = 1; j < nm; j++ ) {
            if (m2<m[j])
            m2=m[j];
        }

        // Compare Smallests
        if (m1>=m2) {
            cout << "Godzilla" << endl;
        }
        else if (m1<m2) {
            cout << "MechaGodzilla" << endl;
        }
        else cout << "undefined";
    }

    return 0;
}
