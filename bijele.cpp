#include <iostream>
#include <cmath>


using namespace std;

int king = 1;
int queen = 1;
int rook = 2;
int bishop = 2;
int knight = 2;
int pawn = 8;




int main()
{
   // 1kings 1queen 2rooks 2bishops 2knights 8pawns


   int n,ki,q,r,b,kni,p;
   cin >> n;


    // Take input for N cases
    for (int x = 0; x < n; x++){
        cin >> ki >> q >> r >> b >> kni >> p;


         // compare numbers for each case, king, queens, etc
        if (ki == 0) cout << king << " ";
            else if (ki > king) {
                cout << -(ki-king) << " ";
            }
            else cout << abs(ki-king) << " ";


        if (q == 0) cout << queen << " ";
            else if (q > queen) {
                cout << -(q-queen) << " ";
            }
            else cout << abs(q-queen) << " ";


        if (r == 0) cout << rook << " ";
            else if (r > rook) {
                cout << -(r-rook) << " ";
            }
            else cout << abs(r-rook) << " ";


        if (b == 0) cout << bishop << " ";
            else if (b > bishop) {
                cout << -(b-bishop) << " ";
            }
            else cout << abs(b-bishop) << " ";


        if (kni == 0) cout << knight << " ";
            else if(kni > knight) {
                cout << -(kni-knight) << " ";
            }
            else cout << abs(kni-knight) << " ";


        if (p == 0) cout << pawn << " ";
            else if (p > pawn) {
                cout << -(p-pawn) << endl;
            }
            else cout << abs(p-pawn) << endl;
    }

    return 0;
}

