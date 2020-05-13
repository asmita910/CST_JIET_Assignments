#include<stdio.h>
//Q1. Divisor Game
#include<bits/stdc++.h>
using namespace std;
int main()
{
	int A,B,C;
	int count=0;
	cout<<"enter A"<<endl;
	cin>>A;
	cout<<"enter B"<<endl;
	cin>>B;
	cout<<"enter C"<<endl;
	cin>>C;
	
	int ar[]={A,B,C};
	
	for(int i=1;i<=A;i++)
	{
		if(i%B==0 && i%C==0 )
		{
			count++;
		}
	}
	cout<<"output:- "<<count<<endl;
}
