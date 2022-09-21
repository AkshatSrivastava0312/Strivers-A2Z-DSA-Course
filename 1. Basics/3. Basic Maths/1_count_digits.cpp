/*

Given a number N. Count the number of digits in N which evenly divides N.
GFG link: https://practice.geeksforgeeks.org/problems/count-digits5716/1

*/


#include <iostream>
using namespace std;

int main(){

    int n;
    cout << "Enter the number: ";
    cin >> n;

    int temp = n;
    int count = 0;

    while(temp > 0){
        int r = temp % 10;
        if(r>0 && n%r==0){
            count++;
        }
        temp = temp / 10;
    }

    cout << "Answer: " << count << endl;

    return 0;

}
