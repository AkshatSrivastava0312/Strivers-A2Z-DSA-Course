/*

****
*  *
*  *
****

Explaination -->

                (Here 's' represents space)
****
*ss*
*ss*
****

It has three cases -->

Case 1 (When row_no = 1 or row_no = total_rows)
-- In this case we print '*'

Case 2 (When column_no = 1 or column_no = total_rows)
-- In this case we print '*'

Case 3 (When any other condition occurs)
-- We will print 's'

*/

#include <iostream>
using namespace std;

int main(){

    int rows;
    cout << "Enter number of rows: ";
    cin  >> rows;

    for(int i=1;i<=rows;i++){

        for(int j=1;j<=rows;j++){

            if(i==1 || i==rows){                    // Case 1
                cout << "*";
            }
            else if(j==1 || j==rows){               // Case 2
                cout << "*";
            }
            else{                                   // Case 3
                cout << " ";
            }
        }
        cout << endl;
    }

    return 0;

}