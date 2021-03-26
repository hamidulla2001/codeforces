#include<iostream>
using namespace std;
int main(int argc, char *argv[])
{
        	int t;
cin>>t;
        	string* str= new string[t];
        	for(int i=0;i<t;i++)
        	{
        	int x,y,countR=0,countL=0,countU=0,countD=0,len;
        	cin>>x>>y;
			    string s;
			    cin>>s;
			    len=s.length();
			    for(int j=0;j<len;j++)
			    {
			    	switch(s[j])
			    	{
			    		case 'R':countR++;break;
			    		case 'L':countL++;break;
			    		case 'U':countU++;break;
			    		case 'D':countD++;break;
			    	}
			    }
			    if(x>=0)
			    {
			    	if(x<=countR)
			    	{
			    		if((y>=0 && y<=countU) || (y<=0 && -y<=countD))str[i]="YES";
			    		else str[i]="NO";
			    	}
			    	else str[i]="NO";
			    }
			    else
			   if (x<=0)
			    {
			    	if(-x<=countL)
			    	{
			    		if((y>=0 && y<=countU) || (y<=0 && -y<=countD))str[i]="YES";
			    		else str[i]="NO";
			    	}
			    	else str[i]="NO";
			    }
        }for(int k=0;k<t;k++)
        cout<<str[k]<<"\n";
        }
        
