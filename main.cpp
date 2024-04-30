// Andrew Kuehn
#include <iostream>
#include <iomanip>
using namespace std;

#include "ShoppingCart.h"
#include "ItemToPurchase.h"

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
      case 'a': {
         // Add item to cart
         string name, description;
         int price, quantity;
         cout << "Enter the item name:" << endl;
         cin.ignore();
         getline(cin, name);
         cout << "Enter the item description:" << endl;
         getline(cin, description);
         cout << "Enter the item price:" << endl;
         cin >> price;
         cout << "Enter the item quantity:" << endl;
         cin >> quantity;

         ItemToPurchase newItem(name, description, price, quantity);
         theCart.AddItem(newItem);
         break;
      }
      case 'd': {
         // Remove item from cart
         string itemName;
         cout << "Enter name of item to remove:" << endl;
         cin.ignore();
         getline(cin, itemName);
         theCart.RemoveItem(itemName);
         break;
      }
      case 'c': {
         // Modify item quantity
         string itemName;
         int newQuantity;
         cout << "Enter the item name:" << endl;
         cin.ignore();
         getline(cin, itemName);
         cout << "Enter the new quantity:" << endl;
         cin >> newQuantity;

         ItemToPurchase itemToUpdate(itemName, "", 0, newQuantity);
         theCart.ModifyItem(itemToUpdate);
         break;
      }
      case 'i': {
         // Output items' descriptions
         theCart.PrintDescriptions();
         break;
      }
      case 'o': {
         // Output shopping cart
         theCart.PrintTotal();
         break;
      }
      case 'q':
         cout << "Goodbye!" << endl;
         break;
      default:
         cout << "Invalid option. Please try again." << endl;
   }
}

int main() {
   string customerName, todayDate;
   cout << "Enter customer's name:" << endl;
   getline(cin, customerName);
   cout << "Enter today's date:" << endl;
   getline(cin, todayDate);

   cout << endl << "Customer name: " << customerName << endl;
   cout << "Today's date: " << todayDate << endl;

   ShoppingCart cart(customerName, todayDate);

   char choice;
   do {
       PrintMenu();
       cout << "Enter your choice: ";
       cin >> choice;
       ExecuteMenu(choice, cart);
   } while (choice != 'q');

   return 0;
}
