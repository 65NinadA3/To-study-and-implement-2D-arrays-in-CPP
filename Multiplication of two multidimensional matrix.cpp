//Name : Ninad Phatak
//PRN : 24070123065
//Batch : ENTC A3
#include <iostream>
using namespace std;
int main() {
    int rA, cA, rB, cB;
    cout << "Rows cols of A: ";
    cin >> rA >> cA;
    cout << "Rows cols of B: ";
    cin >> rB >> cB;
    int a[50][50] = {0}, b[50][50] = {0}, res[50][50] = {0};
    cout << "\nEnter A matrix:\n";
    for (int i = 0; i < rA; i++)
        for (int j = 0; j < cA; j++)
            cin >> a[i][j];
    cout << "\nEnter B matrix:\n";
    for (int i = 0; i < rB; i++)
        for (int j = 0; j < cB; j++)
            cin >> b[i][j];
    for (int i = 0; i < rA; i++) {
        for (int j = 0; j < cB; j++) {
            int sum = 0;
            int common = max(cA, rB); // iterate through the largest overlap
            for (int k = 0; k < common; k++) {
                int valA = (k < cA) ? a[i][k] : 0;
                int valB = (k < rB) ? b[k][j] : 0;
                sum += valA * valB;
            }
            res[i][j] = sum;
        }
    }
    cout << "\nResult matrix (" << rA << "x" << cB << "):\n";
    for (int i = 0; i < rA; i++) {
        for (int j = 0; j < cB; j++)
            cout << res[i][j] << " ";
        cout << "\n";
    }
    return 0;
}
