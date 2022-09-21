/*

    *
   ***
  *****
 *******
*********

For explaination ( 's' represents space )-->

                row_no + space_count = total_rows                   row_no + (row_no - 1) = star_count --> 2*row_no - 1 = star_count
ssss*           1 + 4 = 5                                           1 + 0 = 1
sss***          2 + 3 = 5                                           2 + 1 = 3
ss*****         3 + 2 =  5                                          3 + 2 = 5
s*******        4 + 1 = 5                                           4 + 3 = 7
*********       5 + 0 =  5                                          5 + 4 = 9

*/

#include<iostream>
using namespace std;

int main(){

    int rows;
    cout << "Enter number of rows: ";
    cin >> rows;

    for(int i=1;i<=rows;i++){

        // Pattern-1 --> For printing spaces
        for(int j=1;j<=rows-i;j++){             // Calculating space_count in space_count = total_rows - row_no  from line 11
            cout << " ";
        }
        // Pattern-2 --> For printing stars
        for(int k=1;k<=(2*i)-1;k++){            // Calculating star_count from line 11
            cout <<"*";
        }

        cout << endl;
    }

    return 0;
}