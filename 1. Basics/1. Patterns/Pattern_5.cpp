/*
            Explaination for Approach-2
            row_no + stars_in_row = total_rows + 1
* * * * *   1 + 5 = 6
* * * *     2 + 4 = 6
* * *       3 + 3 = 6
* *         4 + 2 = 6
*           5 + 1 = 6

*/

#include <iostream>
using namespace std;

int main(){

    // Approach-1
    int rowsFirstApproach;
    cout << "Enter number of rows: ";
    cin >> rowsFirstApproach;

    cout << "Approach-1" << endl;
    for(int i=1;i<=rowsFirstApproach;i++){
        for(int j=rowsFirstApproach; j >=i;j--){
            cout << "* ";
        }
        cout << endl;
    }

    // Approach-2
    cout <<"Approach-2" << endl;
    int rowsSecondApproach;
    cout << "Enter number of rows: ";
    cin >> rowsSecondApproach;

    for(int i=1;i<=rowsSecondApproach;i++){
        for(int j=1;j<=rowsSecondApproach+1-i;j++){     // Calculating  stars_in_row  = total_rows + 1 - row_no  from line 3
            cout << "* ";   
        }
        cout << endl;
    }
    
    return 0;
}