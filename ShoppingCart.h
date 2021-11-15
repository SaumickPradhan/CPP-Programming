#ifndef SHOPPINGCART_HPP

#define SHOPPINGCART_HPP

#include<string>

#include <iostream>
#include "ItemToPurchase.h"

using namespace std;

class ShoppingCart
{
	public:
		ShoppingCart();
		ShoppingCart(string a, string b);
		
		string GetCustomerName();
        string GetDate();
        void AddItem(ItemToPurchase x);
        void RemoveItem(string a);
        void ModifyItem(ItemToPurchase y);
        int GetNumItemsInCart();
        int GetCostOfCart();
        void PrintTotal();
        void PrintDescriptions();
		
		
	private:
	string customerName;
    string currentDate;
    vector < ItemToPurchase > cartItems;
};
#endif

