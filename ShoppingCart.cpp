#include <iostream>

#include <string>

#include "ShoppingCart.h"

using namespace std;

ShoppingCart::ShoppingCart()
{
	customerName= "none";
    currentDate="January 1, 2016";
}

ShoppingCart::ShoppingCart(string a, string b)
{
	customerName= a;
    currentDate=b;
}

string ShoppingCart::GetCustomerName()
{
	return customerName;
}

string ShoppingCart::GetDate()
{
	return currentDate;
}

void ShoppingCart::AddItem(ItemToPurchase x)
{
	cartItems.push_back(x);
}

void ShoppingCart::RemoveItem(string a)
{
	int k=0;
	for (size_t i=0;i<cartItems.size();i++)
	{
		if(cartItems.at(i).GetName()==a)
		{
			cartItems.erase(i);
			k++;
		}
		
	}
	if (k==0)
	{
		cout<<"Item not found in cart. Nothing removed."<<endl;
	}
}

void ShoppingCart::ModifyItem(ItemToPurchase y)
{
	int k=0;
	string jj=y.GetName();
	for (size_t i=0;i<cartItems.size();i++)
	{
		if(cartItems.at(i).GetName()==jj)
		{
			
			
			if (y.GetDescription()!="none")
			{
				cartItems.at(i).SetDescription(y.GetDescription());
				
			
			}
			if(y.GetPrice()!=0)
			{
				cartItems.at(i).SetPrice(y.GetPrice());
			}
			
			if(y.GetQuantity()!=0)
			{
				cartItems.at(i).SetQuantity(y.GetQuantity());
			}
			
			k++;
		}
		
	}
	if (k==0)
	{
		cout<<"Item not found in cart. Nothing modified."<<endl;
	}
}


int ShoppingCart::GetNumItemsInCart()
{
	int t=0;
	for (size_t i=0;i<cartItems.size();i++)
	{
		t=t+cartItems.at(i).GetQuantity();
	}
	return t;
}

int ShoppingCart::GetCostOfCart()
{
	int t=0;
	for (size_t i=0;i<cartItems.size();i++)
	{
		t=t+((cartItems.at(i).GetPrice())*(cartItems.at(i).GetQuantity()));
	}
	return t;
}

void ShoppingCart::PrintTotal()
{
	cout<<customerName<<"'s Shopping Cart - "<<currentDate<<endl;
cout<<"Number of Items: "<<GetNumItemsInCart()<<endl<<endl;

for (size_t i=0;i<cartItems.size();i++)
	{
		cartItems.at(i).PrintItemCost();
		
	}
	cout<<endl<<"Total: $"<<GetCostOfCart()<<endl;
}

void ShoppingCart::PrintDescriptions()
{
	cout<<customerName<<"'s Shopping Cart - "<<currentDate<<endl<<endl;
	cout<<"Item Descriptions"<<end;
	for (size_t i=0;i<cartItems.size();i++)
	{
		cartItems.at(i).PrintItemDescription();
	}
		
	
}
