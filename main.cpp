#include<iostream>

#include<string>

#include "ItemToPurchase.h"
# include "ShoppingCart.h"

using namespace std;
void PrintMenu(ShoppingCart a)
{
string c;
while(1)
{

cout<<"MENU"<<endl;
cout<<"a - Add item to cart"<<endl;
cout<<"d - Remove item from cart"<<endl;
cout<<"c - Change item quantity"<<endl;
cout<<"i - Output items' descriptions"<<endl;
cout<<"o - Output shopping cart"<<endl;
cout<<"q - Quit"<<endl<<endl;
cout<<"Choose an option:"<<endl;
cin>>c;
if(c=="q")
{
	break;
}
else if(c=="a")
{
	string w,b;
	int c,d;
cout<<"ADD ITEM TO CART"<<endl;
cout<<"Enter the item name:"<<endl;
getline(cin,w);
cout<<"Enter the item description:"<<endl;
getline(cin,b);
cout<<"Enter the item price:"<<endl;
cin>>c;
cout<<"Enter the item quantity"<<endl;
cin>>d;

ItemToPurchase x(w,b,c,d);
a.AddItem(x);

}
else if(c=="d")
{
	string s;
	cout<<"REMOVE ITEM FROM CART"<<endl;
	cout<<"Enter name of item to remove:"<<endl;
	getline(cin,s);
	a.RemoveItem(s);
}
else if(c=="c")
{
string x;
int y;
cout<<"CHANGE ITEM QUANTITY"<<endl;
cout<<"Enter the item name:"<<endl;
getline(cin,x);

cout<<"Enter the new quantity:"<<endl;
cin>>y;
ItemToPurchase q(x,"none",0,y);
a.ModifyItem(q);
	
}
else if(c=="i")
{
	cout<<"OUTPUT ITEMS' DESCRIPTIONS"<<endl;
	a.PrintDescriptions();
	
}
else if(c=="o")
{
	cout<<"OUTPUT SHOPPING CART"<<endl;
	a.PrintTotal();

}
else
{
	continue;
}


}

int main()

{
	string cn,td;
	
	cout<<"Enter customer's name:"<<endl;
	getline(cin,cn);
	cout<<"Enter today's date:"<<endl;
	getline(cin,td);
	ShoppingCart a(cn,td);
	cout<<"Customer name: "<<a.GetCustomerName()<<endl;
	cout<<"Today's date: "<<a.GetDate()<<endl;
	
	PrintMenu(a);

    

    
    return 0;

}


