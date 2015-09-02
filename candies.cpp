/* Caribbean Online Judge
 * Problem: 1078 - Another Candies
 *
 *
 * Guillermo Garcia 1-09-2015
 */


#include <iostream>
using namespace std;

int main () {


    int t, n;
    cin >> t; // Take "t", to iterate for t cases
    cout << "\n";

    for (int i = 1; i <= t; i++) { // Iterate for t cases
        cin >> n; // Take n, number of children with candy
        int sum = 0;
        for (int j = 1; j <= n; j++) {  // Iterate for N children
            int candyNum = 0;
            cin >> candyNum;
            sum = sum + candyNum; // Add up
        }
        if (sum % n == 0) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
    return 0;
}
