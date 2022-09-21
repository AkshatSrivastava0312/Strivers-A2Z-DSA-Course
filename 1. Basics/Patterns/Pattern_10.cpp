/*

*
* *
* * *
* * * *
* * * * *
* * * *
* * *
* *
*

It is combination of 2 parts -->

Part 1 -->

*
* *
* * *
* * * *
* * * * *

Part 2 -->
                    row_no + star_count = total_rows
* * * *             1 + 4 = 5
* * *               2 + 3 = 5
* *                 3 + 2 = 5
*                   4 + 1 = 5
                    5 + 0 = 5

*/


#include <iostream>
using namespace std;

int main(){
    
    int original_rows;
    cout << "Enter number of rows: ";
    cin >> original_rows;

    // Part 1 -->
    int rows_part_one = original_rows;
    for(int i=1;i<=rows_part_one;i++){
        for(int j=1;j<=i;j++){
            cout << "* ";
        }
        cout << endl;
    }

    // Part 2 -->
    for(int i=1;i<=original_rows;i++){
        for(int j=1;j<=original_rows-i;j++){        // Calculating star_count in  star_count = total_rows - row_no  from line 24
            cout << "* ";
        }
        cout << endl;
    }

    return 0;
}