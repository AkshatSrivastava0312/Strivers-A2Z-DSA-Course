/*
                            'n'th row --> 'n' characters if 'n' is odd then starts with 1 else 0
1                           1st row --> 1 character starts with 1
0 1                         2nd row --> 2 characters starts with 0
1 0 1                       3rd row --> 3 characters starts with 1
0 1 0 1                     4th row --> 4 characters starts with 0
1 0 1 0 1                   5th row --> 5 characters starts with 1

*/

#include <iostream>
using namespace std;

int main(){

    int rows;
    cout << "Enter number of rows: ";
    cin >> rows;

    for(int i=1;i<=rows;i++){
        int value = 0;
        if(i%2 == 1){                           // Checking if row_no is odd
            value = 1;
        }
        for(int j=1;j<=i;j++){
            cout << value << " ";
            if(value == 1){
                value = 0;
            }else{
                value = 1;
            }
        }
        cout << endl;
    }

    return 0;

}