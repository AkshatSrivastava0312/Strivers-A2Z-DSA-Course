/*

1      1
12    21
123  321
12344321

Explaination -->

This pattern is combination of 2 parts -->

Part 1 -->
            (Here 's' denotes  space)                       row_no + space_count = total_rows
1sss                                                        1 + 3 = 4
12ss                                                        2 + 2 = 4
123s                                                        3 + 1 = 4
1234                                                        4 + 0 = 4

Part 2 -->

            (Here 's' denotes space)                        row_no + space_count = total_rows
sss1                                                        1 + 3 = 4                                           
ss21                                                        2 + 2 = 4                                           
s321                                                        3 + 1 = 4
4321                                                        4 + 0 = 4

*/

#include <iostream>
using namespace std;

int main(){

    int rows;
    cout << "Enter number of rows: ";
    cin >> rows;

    for(int i=1;i<=rows;i++){

        // Part-1

        // Printing values
        for(int j=1;j<=i;j++){
            cout << j;
        }
        // Printing spaces
        for(int k=1;k<=rows-i;k++){             // Calculating space_count as  space_count = total_rows - row_no  in line 13
            cout << " ";
        }

        // Part-2

        // Printing spaces
        for(int l=1;l<=rows-i;l++){             // Calculating space_count as  space_count = total_rows - row_no  in line 21
            cout << " ";
        }
        // Printing values
        for(int m=i;m>=1;m--){
            cout << m;
        }

        cout << endl;

    }

    return 0;

}