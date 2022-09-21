/*
                    For explaination of Approach-2 see Pattern_5.cpp
1 2 3 4 5
1 2 3 4
1 2 3
1 2
1

*/

#include <iostream>
using namespace std;

int main(){

    // Approach-1
    cout << "Approach-1" << endl;
    int rowsApproach1;
    cout << "Enter number of rows: ";
    cin >> rowsApproach1;

    for(int i=1;i<=rowsApproach1;i++){
        int temp = 1;
        for(int j=rowsApproach1;j>=i;j--){
            cout << temp++ << " ";
        }
        cout << endl;
    }

    // Approach-2
    cout << "Approach-2" << endl;
    int rowsApproach2;
    cout << "Enter number of rows: ";
    cin >> rowsApproach2;

    for(int i=1;i<=rowsApproach2;i++){
        for(int j=1;j<=rowsApproach2+1-i;j++){
            cout << j << " ";
        }
        cout << endl;
    }

    return  0;
}