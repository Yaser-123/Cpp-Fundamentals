#include<iostream>
using namespace std;

int main() {
    int Arr[3][2] = {
        {1,2},
        {2,4},
        {4,6}
    };

    for(int i=0; i < 3; i++) {
        for(int j=0; j<2; j++) {
            cout << Arr[i][j] << "\t";
        }
        cout << endl;
    }

    return 0;
}