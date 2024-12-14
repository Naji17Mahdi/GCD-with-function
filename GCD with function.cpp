#include <iostream>
#include <conio.h>
#include <math.h>
using namespace std;

int gcd ( int  , int  );

main()
{
	int x , y;
	
	cout<<"Please enter x , y : "<<endl;
	cin>>x>>y;
	
	cout<<gcd ( x , y );
	
	
	
}

int gcd ( int x , int y )
{
	int r;
	r = x % y;
	while ( r != 0 )
	{
		x = y;
		y = r;
		r = x % y;
	}
	return y;
}
