/*
	input = 5;
	output:
		1 2 3 4 5
		  1 2 3 4
		    1 2 3
		      1 2
		        1
*/

#include <bits/stdc++.h>
using namespace std;
#define fast_io ios::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define ll long long

int main()
{
	fast_io;
	int i,j,k,r,n;
	char c;
	cin>>n;
	for(i = n,k=0;i > 0;i--,k++)
	{
		for(j = 0 ;j < 2*k;j++)
			cout<<" ";
		for(r = 1;r <= n-k;r++)
		{
			c = '1' + r - 1;
			cout<<c<<" ";
		}
		cout<<endl;
	}
    
    return 0;
}		