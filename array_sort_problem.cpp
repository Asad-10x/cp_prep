// Write a program that sorts an array in descending Order.
#include <bits/stdc++.h>
using namespace std;

int main()
{
    const int size = 10;
    int array[size] = {4,0,9, -1, 3, 2, 5, 1, 8,2};   // 1, 3, 5, 7, 9

    
    // Variables for loop control
    int i = 0, j = size-1;
    
    /* Loop Block to sort the original Array */
    // pointer i is less than total size of Array.
    while(i < size -1){

        // pointer j is greater than pointer i (to avoid collision i.e. comparing sorted values)
        while(j > i){
            // Check if val at index i is less than val at index j
            if(array[i] < array[j]) { 
                // if variable at start is smaller than variable at end, swap the variables. 
                swap(array[i] , array[j]);
            }
            // decrement ptr j;
            j--;
        }
        // Reset to last index in list. 
        j = size -1;
        // Increment ptr i
        i++;
    }

    // Display Sorted Array
    cout << "Sorted Array: " << endl;
    for(int i = 0; i < size; i++){
        cout << array[i] << ", ";
    }
    return 0;
}