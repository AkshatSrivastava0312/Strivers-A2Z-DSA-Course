/*

                    total_rows - (row_no - 1) = start_letter -->  total_rows - row_no + 1 = start_letter
E                   5 - 0 = 5
D E                 5 - 1 = 4
C D E               5 - 2 = 3
B C D E             5 - 3 = 2
A B C D E           5 - 4 = 1

*/


#include <iostream>
using namespace std;

int main(){

    int rows;
    cout << "Enter number of rows: ";
    cin >> rows;

    for(int i=1;i<=rows;i++){

        int letter = 64 + (rows-i+1);

        for(int j=1;j<=i;j++){
            cout << (char) letter++ << " ";
        }

        cout << endl;
        
    }

    return 0;

}