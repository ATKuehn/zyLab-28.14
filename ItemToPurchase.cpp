//Micheal Harb
#include <iostream>
#include <string>
#include "ItemToPurchase.h"
using namespace std;

ItemToPurchase::ItemToPurchase() {
  itemName = "none";
  itemDescription = "none";
  itemPrice = 0;
  itemQuantity = 0;
  return;
}

ItemToPurchase::ItemToPurchase(string name, string description, int price, int quantity) {
  itemName = name;
  itemDescription = description;
  itemPrice = price;
  itemQuantity = quantity;
  return;
}

void ItemToPurchase::SetName(string name){
    itemName = name;
}
void ItemToPurchase::SetDescription(string description){
    itemName = description;
}
void ItemToPurchase::SetPrice(int price){
      itemPrice = price;
}
void ItemToPurchase::SetQuantity(int qty){
      itemQuantity = qty;
}

string ItemToPurchase::GetName() const {
      return itemName;
}
string ItemToPurchase::GetDescription() const {
      return itemDescription;
}
int ItemToPurchase::GetPrice() const {
      return itemPrice;
}
int ItemToPurchase::GetQuantity() const {
      return itemQuantity;
}

void ItemToPurchase::PrintItemCost(){
  cout << itemName << " " << itemQuantity << " @ $" << itemPrice << " = $" << itemQuantity * itemPrice << endl;
  return;
}

void ItemToPurchase::PrintItemDescription(){
  cout << itemName << ": " << itemDescription << endl;
  return;
}
