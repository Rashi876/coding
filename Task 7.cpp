#include<iostream>
using namespace std;
 void swap(int a,int b)
{int t;
	
		t=a;
		a=b;
	    b=t;

	cout<<"Swaped numbers: "<<a<<b;
    

}
main()
{int n1,n2;
cout<<"Enter the two numbers to be swapped: ";
cin>>n1>>n2;
swap(n1,n2);
}
