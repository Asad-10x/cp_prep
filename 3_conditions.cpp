// This file shows the use of control and condition statemnts.
#include <iostream>
using namespace std;

// Function Declarations
int meow();
int bark();
int Crow();

int main()
{
  cout << "Animal voice program. \n";
  cout << "1. Cat\n2. Dog\n3 Crow\n4. Exit\n";
  cout << "Choice: ";
  int choice; cin >> choice;
  
  /*
    Conditions: these are such logical statements for which computer can answer in yes/no OR True/false.
  */
  if(choice == 1){
    meow();
    cin.ignore(); cin.get();
    system("clear");
    main();
  }
  else if(choice == 2){
    bark();
    cin.ignore(); cin.get();
    system("clear");
    main();
  }
  else if(choice == 3){
    Crow();
    cin.ignore(); cin.get();
    system("clear");
    main();
  }
  else if(choice == 4){
    exit(0);
  }
  else {
    cout << "Invalid choice. \n";
    cin.ignore(); cin.get();
    system("clear");
    main();
  }

    return 1;
}

// Function Implementations
int meow(){
  cout << "\tMeow!\n";
  return 1;
}

int bark(){
  cout << "\tWoof!\n";
  return 1;
}

int Crow(){
  cout << "\tCaww!\n";
  return 1;
};