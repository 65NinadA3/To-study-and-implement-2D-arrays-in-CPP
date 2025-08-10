#include <iostream>
using namespace std;
int main() {
    int n;
    cout << "Enter size of square matrix (n x n): ";
    cin >> n;
    if (n<=0) {
        cout << "Matrix size must be positive." << endl;
        return 0;
    } else {
        int matrix[10][10], transpose[10][10];
        int i = 0, j;
        cout << "Enter elements of the matrix:" << endl;
        while (i < n) {
            j = 0;
            while (j < n) {
                cout << "Element["<<i<<"]["<<j<<"]:";
                cin>>matrix[i][j];
                j++;
            }
            i++;
        }
        i=0;
        while(i<n) {
            j = 0;
            while (j < n) {
                transpose[j][i] = matrix[i][j];
                j++;
            }
            i++;
        }
        cout <<"\nOriginal Matrix:"<<endl;
        i=0;
        while (i < n) {
            j = 0;
            while (j < n) {
                cout << matrix[i][j] << " ";
                j++;
            }
            cout << endl;
            i++;
        }
        cout <<"\nTranspose of Matrix:"<<endl;
        i=0;
        while(true) {
            if (i >= n) break;
            j = 0;
            while (j < n) {
                cout <<transpose[i][j]<<" ";
                j++;
            }
            cout << endl;
            i++;
        }
    }
    return 0;
