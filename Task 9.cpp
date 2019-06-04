#include<iostream>
using namespace std;
main()
{int y,rem,w,days,d;
	cout<<"Enter the number of days: ";
	cin>>d;
	y=d/365;
	rem=d%365;
	w=rem/7;
	days=w*7;
	cout<<"Years: "<<y<<"Weeks: "<<w<<"Days: "<<days;
}
