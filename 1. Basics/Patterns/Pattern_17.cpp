/*

   A
  ABA
 ABCBA
ABCDCBA

Explaination -->

This pattern has two  parts

Part 1 -->

            (Here 's' represents space)                 row_no + space_count = total_rows
sssA                                                    1 + 3 = 4
ssAB                                                    2 + 2 = 4
sABC                                                    3 + 1 = 4
ABCD                                                    4 + 0 = 4

Part 2 -->

            (Here '_' represent blank)          
_                                                   row_no -> start_letter = (row_no - 1) and letter_count = (row_no - 1)
A                                                   2 -> start_letter = 1 and letter_count = 1
BA                                                  3 -> start_letter = 2 and letter_count = 2
CBA                                                 4 -> start_letter = 3 and letter_count = 3

*/

#include <iostream>
using namespace std;

int main(){

    int rows;
    cout << "Enter number of rows: ";
    cin >> rows;

    for(int i=1;i<=rows;i++){

        // Part 1 -->

        // Printing spaces
        for(int j=1;j<=rows-i;j++){                     // Calculating  space_count in  space_count = total_rows - row_no  in line 14
            cout << " ";
        }
        
        // Printing letters
        int letter_part_one = 65;
        for(int k=1;k<=i;k++){                         
            cout << (char) letter_part_one++;
        }


        // Part 2 -->

        // Printing letters
        int letter_part_two = 64+(i-1);
        for(int l=1;l<i;l++){
            if(i == 1){
                continue;
            }
            cout << (char) letter_part_two--;
        }

        cout << endl;

    }

    return 0;

}