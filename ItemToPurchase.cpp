#include <iostream>

#include <string>

#include "ItemToPurchase.h"

using namespace std;



ItemToPurchase::ItemToPurchase()

{

    itemName = "none";

    itemPrice = 0;

    itemQuantity = 0;
    
    itemDescription="none";

}

ItemToPurchase::ItemToPurchase(string a, string b, int c, int d)
{
	itemName=a;
	itemDescription=b;
	itemPrice=c;
	itemQuantity=d;

}

void ItemToPurchase::SetDescription(string x)
{
	itemDescription=x;
}
	
string ItemToPurchase::GetDescription()
{
	return itemDescription;	
}

void ItemToPurchase::PrintItemCost()
{
	string aa=ItemToPurchase::GetName();
	int bb=ItemToPurchase::GetQuantity();
	int cc=ItemToPurchase::GetPrice();
	int dd=bb*cc;
	cout<<aa<<" "<<bb<<" @ $"<<cc<<" = $"<<dd<<endl;
}


void ItemToPurchase::PrintItemDescription()
{
	string aa=ItemToPurchase::GetName();
	string bb=ItemToPurchase::GetDescription();
	cout<<aa<<": "<<bb<<endl;
}


void ItemToPurchase::SetName(string name)

{

    itemName = name;

}

//Implementation of SetPrice function

void ItemToPurchase::SetPrice(int itemPrice)

{

    this->itemPrice = itemPrice;

}

//Implementation of SetQuantity function

void ItemToPurchase::SetQuantity(int itemQuantity)

{

    this->itemQuantity = itemQuantity;

}

//Implementation of GetName function

string ItemToPurchase::GetName()

{

    return itemName;

}

//Implementation of GetPrice function

int ItemToPurchase::GetPrice()

{

    return itemPrice;

}

//Implementation of GetQuantity function

int ItemToPurchase::GetQuantity()

{

    return itemQuantity;

}
