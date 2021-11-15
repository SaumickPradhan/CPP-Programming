//Author: Saumick Pradhan
// Filename: logtable.cpp
// Description: Generate log table till number of lines given
#include <iostream>
#include<cmath>
#include <iomanip>
using namespace std;
int main()
{   //initialize and declare variables
    int rows;
    int x = 1;
    int temp = 0;
    int k = 1;
    int t = 0;
    double LTN = 0;
    double LTW = 0;
    double L = 0;
    int rCount = x;
    //take input
    cout << "How many rows to print? ";
    cin >> rows;
    //table header
    cout << setw(5)<<"x" << setw(20) << "log10(x)" << setw(20) << "log2(x)"  << setw(20) << "log(x)" << endl;
    //generate values of all 3 types of log
    while (rCount <= rows)
    {
        cout << fixed << setprecision(8);
        t = x * (pow(10, temp));
        LTN = log10(t);
        LTW = log2(t);
        L = log(t);
        cout << fixed<< setw(5)<< t << fixed<< setw(20) << LTN << fixed<< setw(20) << LTW << fixed<< setw(20) << L << endl;
        x++;
        k++;
        rCount++;
        if (k == 10)
        {
            temp++;
            k = 1;
            x = 1;
        }
    }
    return 0;
}
