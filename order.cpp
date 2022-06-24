#include <iostream>
using namespace std;

int main() {
	int b,n,i,t,k;
		n=5;
		int a[n];
	    cin>>b;
		cin>>n;
		cin>>k;
		for(i=0;i<b;i++)
		{
		for(i=0;i<n;i++)
		 cin>>a[i];
	    for(i=n-k;i<n;i++)
		    cout<<a[i]<<" ";
		for(i=0;i<n-k;i++)
		    cout<<a[i]<<" ";
		 }
	return 0;
}
