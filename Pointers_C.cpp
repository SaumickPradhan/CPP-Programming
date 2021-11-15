#include<iostream>
#include <iomanip>
using namespace std;
void arraysPointers(double myarray[], const double *pA)
{
	cout<<"Store values by array index references"<<endl;
	cout << setw(20) << "index"<< fixed<< setw(20) << setprecision(10) << "myarray value"<< setw(20) << "myarray element memory loc"<< endl;
	for(int i=0;i<5;i++)
	{
		//input values
		cin>>myarray[i];//input values
		cout << setw(20) << (i)<< fixed<< setw(20) << setprecision(10) << (myarray[i])<< setw(20) << (&myarray[i])<< endl;
	}
	cout<<"Access values by pointer references"<<endl;
	cout << setw(20) <<"index"<< fixed<< setw(20) << setprecision(10) << "dereferenced pointer"<< setw(20) << "pointer value"<< endl;
	for(int i=0;i<5;i++)
	{
		//print values
		cout << setw(20) << (i)<< fixed<< setw(20) << setprecision(10) << *(pA+i)<< setw(20) << (pA+i)<< endl;
	}
	return;
}

int main()
{
	//initialize variables and send to arraysPointers 
	double myarray[5]={0.};
	double *pA=&myarray[0];
	cout<<"pA is "<<pA<<endl;
	cout<<"myarray is "<<myarray<<endl;
	arraysPointers(myarray,pA);
	return 0;
	
}
