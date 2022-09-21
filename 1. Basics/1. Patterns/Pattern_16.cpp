/*

A
B B
C C C
D D D D
E E E E E

*/

#include <iostream>
using namespace std;

int main(){

    int rows;
    cout << "Enter number of rows: ";
    cin >> rows;

    int letter = 65;

    for(int i=1;i<=rows;i++){
        for(int j=1;j<=i;j++){
            cout << (char) letter << " ";
        }
        letter = letter + 1;
        cout << endl;
    }


    return 0;

}