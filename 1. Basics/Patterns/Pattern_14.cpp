/*

A
A B
A B C
A B C D
A B C D E

*/

#include <iostream>
using namespace std;

int main(){

    int rows;
    cout << "Enter number of rows: ";
    cin >> rows;

    for(int i=1;i<=rows;i++){
        int letter = 65;
        for(int j=1;j<=i;j++){
           cout << (char) letter++ << " " ;
        }
        cout << endl;
    }

    return 0;

}