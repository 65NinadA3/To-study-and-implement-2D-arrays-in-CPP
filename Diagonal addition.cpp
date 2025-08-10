//Name : Niand Phatak
//PRN : 24070123065
//Batch : ENTC A3
#include <iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter number of Rows & Column matrix: ";
    cin>>n;
    int m[50][50], sum=0;
    cout<<"\nEnter elements of matrix:\n";
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout<<"Element ["<<i<<"]["<<j<<"]: ";
            cin>>m[i][j];
        }
    }
    for(int i=0;i<n;i++){
        sum += m[i][i];
    }
    cout<<"\nSum of main diagonal elements: "<<sum;
    return 0;
}
