#include<iostream>
using namespace std;
int gcf( int a,int b)
{
	if( a==0 )
	return b;
	
	else
	return ( b, b%a );
}
int main()
{
	
	int a,b;
	cout<<" input your first number:"<<endl;
	cin>> a;
	cout<<"input your second number:"<<endl;
	cin>> b;
	cout<<"the greatest common factor of the numbers you inputed is:"<<endl;
	cout<<gcf(a,b);
	return 0;
}
