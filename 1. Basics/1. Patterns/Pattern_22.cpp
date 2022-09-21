/*

4 4 4 4 4 4 4
4 3 3 3 3 3 4
4 3 2 2 2 3 4
4 3 2 1 2 3 4
4 3 2 2 2 3 4
4 3 3 3 3 3 4
4 4 4 4 4 4 4

                
Explaination -->

This pattern can be splitted into 4 parts as -->

Part 1 | Part 2
Part 3 | Part 4

Part 1 -->

4 4 4 4
4 3 3 3
4 3 2 2
4 3 2 1

Part 2 -->

4 4 4
3 3 4
2 3 4
2 3 4

Part 3 -->

4 3 2 2
4 3 3 3
4 4 4 4

Part 4 -->

2 3 4
3 3 4
4 4 4

Since all the four patterns are symmetrical so, we can just find one formula which will fit all

        value = total_rows - min(row_no, column_no) + 1

    Part 1 and Part 2 can be combined into one loop for rows since they are on same line as->
        row_no = 1 to total_rows, Increment by 1
    For columns->
        column_no = 1 to total_rows, Increment by 1 (Part 1)
        column_no = (total_rows - 1) to 1, Decrement by 1 (Part 2)

    Part 3 and Part 4 can be combined into one loop for rows since they are on same line as->
        row_no = (total_rows - 1) to 1, Decrement by 1
    For columns->
        column_no = 1 to total_rows, Increment by 1 (Part 3)
        column_no = (total_rows - 1) to 1, Decrement by 1 (Part 4)

*/

#include <iostream>
using namespace std;

int main(){

    int rows;
    cout << "Enter number of rows: ";
    cin >> rows;

    for(int i=1;i<=rows;i++){

        // Part 1
        for(int j=1;j<=rows;j++){
            cout << rows - min(i,j) + 1 << " "; 
        }

        // Part 2
        for(int j=rows-1;j>=1;j--){
            cout << rows - min(i,j) + 1 << " ";
        }
        
        cout << endl;

    }

    for(int i=rows-1;i>=1;i--){

        // Part 3
        for(int j=1;j<=rows;j++){
            cout << rows - min(i,j) + 1 << " ";
        }
        
        // Part 4
        for(int j=rows-1;j>=1;j--){
            cout << rows - min(i,j) + 1 << " ";
        }

        cout << endl;

    }

    return 0;

}