// This file is for demonstrating the use of Arrays in c++
#include <bits/stdc++.h>
using namespace std;

int main()
{
    // Simple Array
    int value;
    cout << "Enter value: "; cin >> value;
    int array[10] = {1,2,3,4,5,6,7,8,9,10};

    for (int i = 0; i < 10; i++){
        cout << value << " x " << i+1 << " = "; 
        array[i] = array[i] * value ;
        cout << array[i] << endl;
    }

    // // String as Array
    // string name = "Asad Ali";
    // for(int i = 0; i < name.length(); i++){
    //     cout << name[i] << endl;
    // }


    cin.ignore(); cin.get();

    return 0;
}