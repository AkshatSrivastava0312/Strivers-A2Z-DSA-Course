/*

    *
   ***
  *****
 *******
*********
*********
 *******
  *****
   ***
    *

Explaination -->
    It is combination of Pattern_7 and Pattern_8

*/

#include <iostream>
using namespace std;

int main(){

    int rows_original;
    cout << "Enter number of rows: ";
    cin >> rows_original;

    // Pattern_7
    int rows_regular = rows_original;
    for(int i=1;i<=rows_regular;i++){
        // Print spaces
        for(int j=1;j<=rows_regular-i;j++){
            cout << " ";
        }
        // Print starts
        for(int k=1;k<=(2*i)-1;k++){
            cout << "*";
        }
        cout << endl;
    }

    //Pattern_8
    for(int i=1;i<=rows_original;i++){
        // Print spaces
        for(int j=1;j<=i-1;j++){
            cout << " ";
        }
        // Print stars
        for(int k=1;k<=(2*rows_original)-(2*i)+1;k++){
            cout << "*";
        }
        cout << endl;
    }

    return 0;

}