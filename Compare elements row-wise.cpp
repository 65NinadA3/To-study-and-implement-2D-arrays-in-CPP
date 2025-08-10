//Name : Ninad Phatak
//PRN : 24070123065
//Batch : ENTC A3
#include <iostream>
using namespace std;
int main() {
    int r = 2, c; // only 2 rows for comparison
    cout << "Cols: ";
    cin >> c;
    int arr[2][50];
cout << "Enter row 1:\n";
    for (int j = 0; j < c; j++)
        cin >> arr[0][j];
 cout << "Enter row 2:\n";
    for (int j = 0; j < c; j++)
        cin >> arr[1][j];
    cout << "\nComparison (row1 vs row2):\n";
    for (int j = 0; j < c; j++) {
        if (arr[0][j] == arr[1][j])
            cout << "Col " << j << ": Equal\n";
        else if (arr[0][j] > arr[1][j])
            cout << "Col " << j << ": Row1 bigger\n";
        else
            cout << "Col " << j << ": Row2 bigger\n";
    }
return 0;
}
