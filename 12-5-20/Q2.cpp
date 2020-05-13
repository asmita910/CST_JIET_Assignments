//Q.2 Enumerating GCD
//solving using recursion
#include<stdio.h>
#include<bits/stdc++.h>
using namespace std;
//Function to return gcd of a and b
int gcd(int a,int b)
{
	if(a==0)
	  return b;
	return gcd(b%a,a);
}

int main()
{
	int A,B,D;
	cout<<"enter A"<<endl;
	cin>>A;
	cout<<"enter B"<<endl;
	cin>>B;
	int a=A;
	int b=B;
	
	cout<<"The GCD between A and B is :-"<<gcd(a,b)<<"   "<<endl;
	return 0;
}

  
