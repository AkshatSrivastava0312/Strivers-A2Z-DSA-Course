/*

*********
 *******
  *****
   ***
    *

For Explaination ( 's' represents space ) -->

                    row_no = space_count + 1              (2* total_rows - row_no + 1) - row_no = star_count --> 2*total_rows - 2*row_no + 1 = star_count      
*********           1 = 0 + 1                             10 - 2 + 1 = 9 
s*******            2 = 1 + 1                             10 - 4 + 1 = 7
ss*****             3 = 2 + 1                             10 - 6 + 1 = 5
sss***              4 = 3 + 1                             10 - 8 + 1 = 3
ssss*               5 = 4 + 1                             10 - 10 + 1 = 1

*/

#include <iostream>
using namespace std;

int main(){

    int rows;
    cout << "Enter number of rows: ";
    cin >> rows;

    for(int i=1;i<=rows;i++){

        // Pattern-1 --> For printing spaces
        for(int j=1;j<=i-1;j++){                  // Calculating space_count in space_count = row_no - 1 from line 11
            cout << " ";
        }


        // Pattern-2 --> For printing stars         
        for(int k=1;k<=(2*rows)-(2*i)+1;k++){     // Calculating star_count from line 11
            cout << "*";
        }


        cout << endl;

    }

    return 0;

}