#include <iostream>
#include <string>
#include <vector>
#include <sstream>
#include <iomanip>
using namespace std;

int main() {
   
   string t,c1,c2;
   
   vector<string> sv(0);
   vector<int> nv(0);
   
   cout<<"Enter a title for the data:"<<endl;
   getline(cin,t);
   
   cout<<"You entered: "<<t<<endl<<endl;
   cout<<"Enter the column 1 header:"<<endl;
   getline(cin,c1);
   
   cout<<"You entered: "<<c1<<endl<<endl;
   cout<<"Enter the column 2 header:"<<endl;
   getline(cin,c2);
   
   cout<<"You entered: "<<c2<<endl<<endl;;
   string dp="";
   string word="";
   int n=0;
   int i=0;
   int temp=0;
   while(dp!="-1")
   {
      cout<<"Enter a data point (-1 to stop input):"<<endl;
      getline(cin,dp);
      //cout<<dp;
      //stringstream ss(dp);
      //ss>>word;
      //ss>>n;
      if (dp=="-1")
      {
      	cout<<endl;
      	break;
	  }
	  
	int count = 0;
	for (int i = 0; i < dp.size(); i++)
	{
		if (dp.at(i) == ',') 
		{
			count++;
		}
	}
	
    char temp1=dp.at(dp.find(',')+2);
    //cout<<temp;
	if(count==0) 
	{
		cout<<"Error: No comma in string."<<endl<<endl;
		continue;
	}
	else if(count>1)
	{
		cout<<"Error: Too many commas in input."<<endl<<endl;
		continue;
	}
	
	//else if (temp!='0' ||temp!='1' ||temp!='2' ||temp!='3' ||temp!='4' ||temp!='5' ||temp!='6' ||temp!='7' ||temp!='8' ||temp!='9' )
	 else if(isdigit(temp1)==0)
	 {
	 	cout<<"Error: Comma not followed by an integer."<<endl<<endl;
	 	continue;
	 }
	  
	  //find_first_of("0123456789") != std::string::npos
      sv.push_back(dp.substr(0,dp.find(",")));
      stringstream degree(dp.substr(dp.find(",")+2));
	  degree >> temp;
	  
	  //dp.substr(dp.find(",")+2);
      nv.push_back(temp);
      cout<<"Data string: "<<sv[i]<<endl;
      cout<<"Data integer: "<<nv[i]<<endl<<endl;
      i++;
   }
   
   cout<<setw(33)<<t<<endl;
   cout<<setw(20)<<left<<c1<<"|"<<setw(23)<<right<<c2<<endl;
   int line=c1.length()+c2.length()+20+23;
   for (int i=0;i<44;i++)
   {
   	cout<<"-";
   }
   cout<<endl;
   for (int i=0;i<sv.size();i++)
   {
   	cout<<setw(20)<<left<<sv[i]<<"|"<<setw(23)<<right<<nv[i]<<endl;
   	
   }
   
   for (int i=0;i<sv.size();i++)
   {
   	cout<<setw(20)<<right<<sv[i]<<" ";
	for(int j=0; j<nv[i]; j++)
	{
		cout<<"*";
	}
	cout<<endl;
   }
   //cout<<setfill('-')<<setw(43);
   return 0;
}
