#include<iostream>
using namespace std;
int main()
{int t;
	long long int m,*x,*y,*n,*k;
	cin>>t;
	x=new long long int[t];
	y=new long long int[t];
	n=new long long int[t];
	k=new long long int[t];
	for(int i=0;i<t;i++)
	{ 
		cin>>x[i]>>y[i]>>n[i];
		m=n[i]%x[i];
		if(m<y[i])
		k[i]=n[i]-m+y[i]-x[i];
		else
		k[i]=n[i]-m+y[i];
	}
	for(int i=0;i<t;i++)
	cout<<k[i]<<"\n";
	return 0;
}
