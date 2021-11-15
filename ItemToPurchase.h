#pragma once

#ifndef ITEMTOPURCHASE_H_INCLUDED

#define ITEMTOPURCHASE_H_INCLUDED

#include<string>

#include <iostream>

using namespace std;

class ItemToPurchase

{

public:

   
    ItemToPurchase();
    ItemToPurchase(string a, string b, int c, int d);

    
    void SetDescription(string s);
	
	string GetDescription();

    void PrintItemCost();
    
    void PrintItemDescription();
    
	void SetName(string ItemName);

   
    void SetPrice(int itemPrice);

   
    void SetQuantity(int itemQuantity);

    string GetName();

    int GetPrice();


    int GetQuantity();

private:
	
	string itemDescription;
 
    string itemName;

    int itemPrice;

    int itemQuantity;

};

#endif
