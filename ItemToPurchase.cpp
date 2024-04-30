#include <iostream>
#include <string>
#include "ItemToPurchase.h"
using namespace std;

void ItemToPurchase::ItemToPurchase(){
  itemName = "none";
  itemDescription = "none";
  itemPrice = 0;
  itemQuantity = 0;
}
void ItemToPurchase::ItemToPurchase(string name, string description, int price, int qty = 0){
  itemName = name;
  itemDescription = description;
  itemPrice = price;
  itemQuantity = qty;
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
  cout << itemCost;
}
void ItemToPurchase::PrintItemDescription(){
  cout << itemDescription;
}
