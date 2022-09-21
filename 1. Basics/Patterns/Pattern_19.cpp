/*

**********
****  ****
***    ***
**      **
*        *
*        *
**      **
***    ***
****  ****
********** 

Explaination -->

This pattern has 4 parts as following

Part 1 | Part 2
Part 3 | Part 4

Part 1 -->

            (Here 's' represents space)     row_no - 1 = space_count                    row_no + star_count = total_rows + 1
*****                                       1 - 1 = 0                                   1 + 5 = 6
****s                                       2 - 1 = 1                                   2 + 4 = 6
***ss                                       3 - 1 = 2                                   3 + 3 = 6
**sss                                       4 - 1 = 3                                   4 + 2 = 6
*ssss                                       5 - 1 = 4                                   5 + 1 = 6

Part 2 -->

            (Here 's' represents space)     follows same formula given on line 23 for space_count and star_count
*****
s****
ss***
sss**
ssss*

Part 3 -->

            (Here 's' represent space)         row_no + space_count = total_rows                  row_no = star_count
*ssss                                          1 + 4 = 5                                          1 = 1
**sss                                          2 + 3 = 5                                          2 = 2
***ss                                          3 + 2 = 5                                          3 = 3
****s                                          4 + 1 = 5                                          4 = 4
*****                                          5 + 0 = 5                                          5 = 5

Part 4 -->

          (Here 's' represents space)     follows same formula given on line 41 for space_count and star_count
ssss*
sss**
ss***
s****
*****

*/


#include <iostream>
using namespace std;

int main(){

    int rows;
    cout << "Enter number of rows: ";
    cin >> rows;

    for(int i=1;i<=rows;i++){

        // Part 1

        // Printing stars
        for(int j=1;j<=rows+1-i;j++){
            cout << "*";
        }

        // Printing spaces
        for(int k=1;k<=i-1;k++){
            cout << " ";
        }

        // Part 2

        // Printing spaces
        for(int l=1;l<=i-1;l++){
            cout << " ";
        }

        // Printing stars
        for(int m=1;m<=rows+1-i;m++){
            cout << "*";
        }

        
        cout << endl;

    }

    for(int i=1;i<=rows;i++){

        // Part 3

        // Printing stars
        for(int n=1;n<=i;n++){
            cout << "*";
        }

        // Printing spaces
        for(int o=1;o<=rows-i;o++){
            cout << " ";
        }


        // Part 4

        // Printing spaces
        for(int p=1;p<=rows-i;p++){
            cout << " ";
        }

        // Printing stars
        for(int q=1;q<=i;q++){
            cout << "*";
        }


     cout << endl;

    }
        

    return 0;

}