/*

                    row_no + letter_count = total_rows + 1
A B C D E           1 + 5 = 6
A B C D             2 + 4 = 6
A B C               3 + 3 = 6 
A B                 4 + 2 = 6
A                   5 + 1 = 6

*/

#include <iostream>
using namespace std;

int main(){

    int rows;
    cout << "Enter number of rows: ";
    cin >> rows;

    for(int i=1;i<=rows;i++){
        int value=65;
        for(int j=1;j<=rows+1-i;j++){                   // Calculating letter_count as  letter_count = total_rows + 1 - row_no  in line 3
            cout << (char) value++ << " ";
        }
        cout << endl;
    }

    return 0;

}