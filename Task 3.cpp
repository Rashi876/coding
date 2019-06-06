#include<iostream>
using namespace std;
main()
{
	int y;
	cout<<"Enter the year";
	cin>>y;
	if(y%4==0)
	{
		if(y%100==0)
		{
			if(y%400==0)
			cout<<"THE year"<<y<<"is a leap year";
			else
			cout<<"the year"<<y<<"is not a leap year";
			
		}
		else
		cout<<"The year"<<y<<"is a leap year";
		
	}
	else
	cout<<"The year"<<y<<"is not a leap year";
}
	
