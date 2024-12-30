/*1. Festival Discount Calculator
You are working on a software for a shopping website that offers discounts based on certain conditions during a festival. The system calculates the final price of an item based on these rules:

If the item's price is greater than or equal to 10,000:
Regular customers get a 20% discount.
New customers get a 10% discount.
If the item's price is between 5,000 and 10,000 (inclusive):
Regular customers get a 15% discount.
New customers get a 5% discount.
If the item's price is less than 5,000, no discount is applied.
Input:
The item's price (an integer).
The type of customer ("regular" or "new").
Output:
The final price after applying the discount (or no discount).
*/

#include <bits/stdc++.h>
using namespace std;

// Function Declaration
int calculate(int p, bool s);

// Driver Program
int main()
{
  cout << "Enter the price of Items: ";
  int price;
  cin >> price;

  bool special; 
  cout << "Is it a Regular Customer? [yes(1)/ no(0)]: ";
  int choice; cin >> choice;

  if(choice <0 || choice > 2){ cout << "Invalid Choice\n"; return 1;}
  if(choice == 1){ special = true;}
  else{ special = false; }

  float total_price = calculate(price, special);

  cout << "Total Price customer has to pay: " << total_price << endl;

  return 0;
}

// Function Implementations
int calculate(int p, bool s)
{
  if(p < 5000){
    return p;
  }
  else if(p > 5000 && p < 10000){
    if(s == true){
      float onePercent= p/100;
      float discount = onePercent*15;
      return p-discount;
    }
    else{
      float onePercent= p/100;
      float discount = onePercent*5;
      return p-discount;
    }
  }
  else{
    if(s == true){
      float onePercent= p/100;
      float discount = onePercent*20;
      return p-discount;
    }
    else{
      float onePercent= p/100;
      float discount = onePercent*10;
      return p-discount;
    }
    return -1;
  }

  return 0;
}
