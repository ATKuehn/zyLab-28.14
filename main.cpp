#include <iostream>
#include <iomanip>
using namespace std;

#include "ShoppingCart.h"

void PrintMenu() {
   cout << "MENU" << endl;
   cout << "a - Add item to cart" << endl;
   cout << "d - Remove item from cart" << endl;
   cout << "c - Change item quantity" << endl;
   cout << "i - Output items' descriptions" << endl;
   cout << "o - Output shopping cart" << endl;
   cout << "q - Quit" << endl;
}

void ExecuteMenu(char option, ShoppingCart& theCart) {
   switch (option) {
      case 'a':
         break;
      case 'd'
         break;
      case 'c':
         break;
      case 'i':
         break;
      case 'o':
         break;
      case 'q':
         cout << "Goodbye!" << endl;
         break;
      default:
         cout << "Invalid option. Please try again." << endl;
}

int main() {
   string customerName, todayDate;
   cout << "Enter customer's name:" << endl;
   getline(cin, customerName);
   cout << "Enter today's date:" << endl;
   getline(cin, todayDate);

   cout << endl << "Customer name: " << customerName << endl;
   cout << "Today's date: " << todayDate << endl;

   ShoppingCart cart;

   char choice;
    do {
        PrintMenu();
        cout << "Enter your choice: ";
        cin >> choice;
        ExecuteMenu(choice, cart);
    } while (choice != 'q');
   
   return 0;
}
