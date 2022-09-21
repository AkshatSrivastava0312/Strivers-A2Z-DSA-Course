/*

*        *
**      **
***    ***
****  ****
**********
****  ****
***    ***
**      **
*        *

Explaination -->

This pattern has four parts as following

Part 1 | Part 2
Part 3 | Part 4


Part 1 -->

                (Here 's' represents space)        row_no + space_count = total_rows                   star_count = row_no
*ssss                                              1 + 4 = 5                                           1 = 1
**sss                                              2 + 3 = 5                                           2 = 2
***ss                                              3 + 2 = 5                                           3 = 3
****s                                              4 + 1 = 5                                           4 = 4
*****                                              5 + 0 = 5                                           5 = 5



Part 2 -->

                (Here 's' represents space)        row_no + space_count = total_rows                   star_count = row_no
ssss*                                              1 + 4 = 5                                           1 = 1
sss**                                              2 + 3 = 5                                           2 = 2
ss***                                              3 + 2 = 5                                           3 = 3
s****                                              4 + 1 = 5                                           4 = 4
*****                                              5 + 0 = 5                                           5 = 5

Part 3 -->

            (Here 's' represents space)        space_count = row_no                   star_count + row_no = total_rows
****s                                          1 = 1                                  4 + 1 = 5
***ss                                          2 = 2                                  3 + 2 = 5
**sss                                          3 = 3                                  2 + 3 = 5
*ssss                                          4 = 4                                  1 + 4 = 5
sssss                                          5 = 5                                  0 + 5 = 5

Part 4 -->

            (Here 's' represents space)        space_count = row_no                   star_count + row_no = total_rows
s****                                          1 = 1                                  4 + 1 = 5
ss***                                          2 = 2                                  3 + 2 = 5
sss**                                          3 = 3                                  2 + 3 = 5
ssss*                                          4 = 4                                  1 + 4 = 5
sssss                                          5 = 5                                  0 + 5 = 5

*/

#include <iostream>
using namespace std;

int main()
{

    int rows;
    cout << "Enter number of  rows: ";
    cin >> rows;

    for(int i=1;i<=rows;i++){
        
        // Part 1

        // Printing Stars
        for(int j=1;j<=i;j++){
            cout << "*";
        }
        // Printing Spaces
        for(int k=1;k<=rows-i;k++){
            cout << " ";
        }

        // Part 2

        // Printing Spaces
        for(int k=1;k<=rows-i;k++){
            cout << " ";
        }
        // Printing Stars
        for(int j=1;j<=i;j++){
            cout << "*";
        }

        cout << endl;

    } 

    for(int i=1;i<=rows;i++){

        // Part 3

        // Printing Starts
        for(int j=1;j<=rows-i;j++){
            cout << "*";
        }
        // Printing Spaces
        for(int k=1;k<=i;k++){
            cout << " ";
        }

        // Part 4

        // Printing Spaces
        for(int k=1;k<=i;k++){
            cout << " ";
        }
        // Printing Starts
        for(int j=1;j<=rows-i;j++){
            cout << "*";
        }

        cout << endl;

    }


    return 0;

}