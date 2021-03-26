#include<iostream>
#include<cmath>
using namespace std;
int powof(int a,int b)
{
	int c=0;
	while(a%b==0)
	{
		c++;
		a/=b;
		
	}
	return c;
}
int main(int argc, char *argv[])
{
	int a,*b,c,d;
	cin>>a;
	b=new int[a];
	for(int i=0;i<a;i++)
	cin>>b[i];
	for(int i=0;i<a;i++)
	{
		c=powof(b[i],3);
		d=powof(b[i],2);
		if(c<d || b[i]/pow(3,c)/pow(2,d)!=1)
		cout<<-1<<"\n";
		else cout<<2*c-d<<"\n";
	}
	return 0;
}
