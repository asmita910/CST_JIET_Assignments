//Q5. compute the square root of Integer
#include<stdio.h>
#include<cmath>
#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cout<<"enter number"<<endl;
	cin>>n;
	
	if(n==0 || n==1){
		cout<<n<<endl;
	}
	
	else
	{
		int start=1,end=n;
		float ans;
		while(start<=end){
			int mid=(start+end)/2;
			if(mid*mid==n)
				cout<<mid<<" is the square root of given number"<<endl;
			
			if(mid*mid<n){
				start=mid+1;
				ans=mid;
			}
			else
				end=mid-1;
		}
	}
	
}

