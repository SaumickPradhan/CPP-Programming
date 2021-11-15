		#include<iostream>
		using namespace std;
		void pointerOps(const int& x, int *y)//no return
		{
			//px is y pointer
			cout << "value of x = " << x << endl;//prints x
			cout << "address of x = " << &x << endl;// prints address of x
			cout << "memory location pointed to by px = " << y << endl;//prints location of x as px is pointer to x
			cout << "value obtained by dereferencing px = " << *y << endl;//dereference px to get value at its address (x)
			cout << "value obtained by taking the address of the dereferenced value of px = " << &(*y) << endl;// deference of px (y) is x and we print address of it
			cout << "value obtained by dereferencing the address of px = " << *(&(*y)) << endl;// we take address of pointer px (y) and derefernce it to get the value
			cout << "memory location pointed to after incrementing px by 1 = " << &(*++y) << endl;//print location of pointer after incrementing
			//answer of c and g is different due to incrmentation on the pointer variable px (y). New address is for x+1=11
			return;
		}

		int main()
		{
			// initialize values and pass to pointerOps
			int x = 10;
			int* px = &x;
			pointerOps(x, px);
			return 0;
		}	
