// This file demonstrates the use of Structs in c++
#include <bits/stdc++.h>
using namespace std;

// Structure Def.
struct Point {
    // Members 
    int x;
    int y;

    // Default Constructor
    Point() {x = y = 0; }

    // Parameterized Constructor
    Point(int a, int b) {x = a; y = b; }

    // Methods
    void show() {
        cout << "("<< x << ", " << y << ")";
        return;
    }
};

// Declaration
double calculateDistance(Point a, Point b);

int main()
{

    Point p1(2,3), p2(4,5);

    // temp test show (garbage)
    // p1.show();



    cout << "\nThe distance between Point 1: ";
    p1.show();
    cout << " & Point 2: ";
    p2.show();

    cout << " is " << calculateDistance(p1, p2) << " m"<< endl;


    return 0;
}

// Implementation
double calculateDistance(Point a, Point b){
    // difference
    double x_dif = (b.x - a.x);
    double y_dif = (b.y - a.y);

    // Square 
    x_dif *= x_dif;
    y_dif *= y_dif;

    // Sum 
    double temp_sum = x_dif + y_dif;

    // Square-root
    double result = sqrt(temp_sum);

    return result;
}