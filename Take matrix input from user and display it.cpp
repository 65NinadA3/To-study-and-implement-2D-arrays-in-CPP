//Name : Ninad Phatak
//PRN : 24070123065
//Batch : ENTC A3
#include <iostream>
using namespace std;
int main() {
    int matrix[3][3];
    int i,j;
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            cout<<"Enter element("<<i<<","<<j<<"):";
            cin>>matrix[i][j];
        }
    }
    cout<<"Matrix is:\n";
    for(i=0;i<3; i++) {
        for(j = 0; j < 3; j++) {
            cout<<matrix[i][j] << "\t";
        }
        cout<<endl;
    }
  return 0;
}
