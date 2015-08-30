#include <iostream>
using namespace std;


int main () {
   int t;


   cin >> t;

   for (int i = 1; i<=t; i++) {  // Iterate over i cases
        int n,m;
        int pos = 0;
        int temp = 0;
        cin >> m >> n;
        int sum [n];
        int votes[n][m];
        // Variables



        for (int j = 0; j < m; j++) { // Iterate over m regions
            for (int k = 0; k < n; k++) { // Iterate over n candidates
                cin >> votes[j][k]; // Take input for votes
                sum[k]= sum[k] + votes[j][k]; // Sum up all the candiadtes'
                //regions' votes
            }
        }

        for (int x = 0; x<m; x++) { // Find the candidate with most votes
            if (sum[0]<sum[x]) {
                sum[0]=sum[x];
                pos = x;
            }

        }
        cout << pos << endl; // Print out the array position of the largest
        // sum.


   }
    return 0;
}
