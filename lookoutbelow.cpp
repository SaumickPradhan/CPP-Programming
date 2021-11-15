//Author: Saumick Pradhan
// Filename: lookoutbelow.cpp
// Description: Calculate time taken for balloon to fall and friend to reach strike point.
#include <iostream>
#include<cmath>
#include <iomanip>
using namespace std;
double time1, time2;
const double epsilon = 0.01;
const double deltaT = 0.001;
const double cD = 0.0012;
int main()
{   //input
	double distance, speed, verDist;
	double time1, time2,x0=0,x1=0,v0=0,v1=0,tDiff=0;
	int g = 32;
	int k = 0;
	cout << "How far away is your friend(feet)? ";
	cin >> distance;
	cout << endl<< "How fast are they walking(feet / sec)? ";
	cin >> speed;
	cout << endl<< "How high are you before dropping your balloon(feet)? ";
	cin >> verDist;
	//calculate time1
	time1 = (double) distance / speed;

	//calculate k till x1 <= verDist
	while (x1 <= verDist)
	{
		v1 = v0 - ((cD	- g) * deltaT);
		v0 = v1;
		x1 = x0 + (v1 * deltaT);
		x0 = x1;
		k++;
	}
	//calculate time2
	time2 = deltaT * k;
	//set decimal points
	cout << fixed << setprecision(2);
	time1 = floor(100 * time1) / 100;
	time2 = floor(100 * time2) / 100;
	//printing
	cout << "It will take "  << time1 << " seconds for them to reach the balloon point" << endl;
	cout << "It will take " << time2 << " seconds for your balloon to travel to the ground" << endl;
	tDiff = time2 - time1;

	//print statement
	if (time2 < time1)
	{
		cout << "If you wait "  << fabs(tDiff) << " seconds, you will hit them" << endl;
	}
	else if (fabs(tDiff) <= epsilon)
	{
		cout << "Bingo, you hit your friend succesfully" << endl;
	}
	else
	{
		cout << "It is too late to drop your balloon" << endl;
	}
	return 0;
}
