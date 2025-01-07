#include <bits/stdc++.h>
using namespace std;

int main()
{
    /*
        *
        **
        ***
        ****
        *****
    */
    
    // int rows, cols; 
    // cout << "Enter rows (int): "; cin >> rows;

    // for (int i = 0; i < rows; i++){
    //     for(int j = i+1; j > 0; j--) {
    //         cout << "*";
    //     }
    //     cout << endl;
    // }

    /*
            *
           **
          ***
         ****
        *****
    */

    int rows, control; 
    cout << "Enter rows (int): "; cin >> rows;
    control = rows;

    // Loop for controlling rows
    for( int i = 0; i < rows; i++){
        
        // Loop for controlling spaces
        for(int j = control - (i+1); j > 0; j--){
            cout << " ";
        }

        // Loop for controlling stars
        for(int j = i+1; j > 0; j--){
            cout << "*";
        }
        cout << endl;
    }

    return 0;
}