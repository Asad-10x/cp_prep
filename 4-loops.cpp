// This file expains different kinds of loop: for , while & do-while loops
#include <iostream>
#include <cmath>
using namespace std;

// [ Example 1]
// // Function Declarations
// int printTable(int val);

// // Driver Program
// int main(){

//     cout << "Enter the integer value: "; 
//     int x; cin >> x;

//     printTable(x);
//     return 0;
// }

// int printTable(int val){
//     for(int i=0; i < 10; i++){
//         cout << val << " x " << i+1 << " = " << val * (i+1) << endl;
//     }
//     return 0;
// };


// [Example 2]
// Function Declarations
int printPrimes(int x, int y);
bool isPrime(int n){
    // base cases
    if (n <= 1) return false;
    if (n == 2) return true;
    if (n % 2 == 0) return false;
    
    int sqrt_n = sqrt(n);
    for (int i = 3; i <= sqrt_n; i += 2) {
        if (n % i == 0) return false;
    }
    return true;
}

int main(){
    cout << "Enter starting range: "; 
    int start; cin >> start; 

    cout << "Enter ending range: "; 
    int end; cin >> end; 

    printPrimes(start, end);
    return 0;
}

int printPrimes(int x, int y){
    for(int i = x; i < y; i++){
        if(isPrime(i)){
            cout << i << ", ";
        }
    }
    return 0;
};
