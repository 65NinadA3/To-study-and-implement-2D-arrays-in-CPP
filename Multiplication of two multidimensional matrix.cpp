#include <iostream>
using namespace std;
int main() {
    int rA, cA, rB, cB;
    cout << "Rows cols of A: ";
    cin >> rA >> cA;
    cout << "Rows cols of B: ";
    cin >> rB >> cB;
   int a[50][50], b[50][50], res[50][50] = {0};
 if (cA != rB) {
        cout << "Can't multiply, size mismatch";
        return 0;
    }
cout << "\nA matrix:\n";
for (int i = 0; i < rA; i++)
        for (int j = 0; j < cA; j++)
            cin >> a[i][j];
cout << "\nB matrix:\n";
for (int i = 0; i < rB; i++)
        for (int j = 0; j < cB; j++)
            cin >> b[i][j];
for (int i = 0; i < rA; i++) {
        for (int j = 0; j < cB; j++) {
            int s = 0;
            for (int k = 0; k < cA; k++)
                s += a[i][k] * b[k][j];
            res[i][j] = s;
        }
    }
 cout << "\nResult:\n";
    for (int i = 0; i < rA; i++) {
        for (int j = 0; j < cB; j++)
            cout << res[i][j] << " ";
        cout << "\n";
    }
 return 0;
}
