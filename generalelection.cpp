/* Caribbean Online Judge
 * Problem: 1003 - General Election
 *
 *
 * Guillermo Garcia 30-08-2015
 */





#include <iostream>
#include <vector>
using namespace std;


int main () {
   int t;


   cin >> t;

   for (int i = 1; i<=t; i++) {  // Iterate over i cases
        int n,m;
        int temp = 0;
        cin >> n >> m;

        vector<int> sums(n, 0);
        // Variables
        for(int i = 0; i < m; i++){
            for(int j = 0; j< n;j++){
                int count;
                cin >> count;
                sums[j] += count;
            }
        }

        int max = -1;
        int pos= -1;
        for(int i = 0; i < n; i++){
            if(sums[i] > max){
                max = sums[i];
                pos = i;
            }
        }

        cout << pos+1 << endl; // Print out the array position of the largest
        // sum.


   }
    return 0;
}
