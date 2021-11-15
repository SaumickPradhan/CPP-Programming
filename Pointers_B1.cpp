		#include<iostream>
		using namespace std;
		int cubeIt(int x)//a
		{
			return x*x*x;//take values
		}
		/*int cubeIt(const int &x)b
		{
			return x*x*x;//take values
		}
		*/
		int cubeIt(int *x)//c
		{
			
			return (*x)*(*x)*(*x);//take pointers
		}
		

		int main()
		{
			int x = 10;
			//overlaoding
			cout << "return from cubeIt(int) = "<< cubeIt(x)<< endl;//goes to a
			//cout << "return from cubeIt(const int &) = "<< cubeIt(x)<< endl;//doesnot run as ambiguos 
			cout <<"return value from cubeIt(int *) = "<< cubeIt(&x)<< endl;//goes to c
			return 0;
		}	
		
