		#include<iostream>
		using namespace std;
		void pointerOps(const int& x, int *y)
		{
			cout << "value of x = " << x << endl;
			cout << "address of x = " << &x << endl;
			cout << "memory location pointed to by px = " << y << endl;
			cout << "value obtained by dereferencing px = " << *y << endl;
			cout << "value obtained by taking the address of the dereferencedvalue of px = " << &(*y) << endl;// the order of operations is &*
			cout << "value obtained by dereferencing the address of px = " << *(&y) << endl;// the order of operations is *&
			cout << "memory location pointed to after incrementing px by 1 = " << &(*y++) << endl;
			return;
		}

		int main()
		{
			int x = 10;
			int* px = &x;
			pointerOps(x, px);
			return 0;
		}	
