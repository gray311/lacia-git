#include<iostream>
using namespace std;
int main()
{
	double ans=1;
	int n;
	cin>>n;
	for(int i=1;i<=n;++i)
	{
		double cnt=(n*n+i)*1.0/(n*n);
		ans*=cnt;
	 }
	 cout<<ans; 
 } 
