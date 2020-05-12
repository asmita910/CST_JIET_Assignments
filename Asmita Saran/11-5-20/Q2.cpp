//To find pair of elements having minimum XOR 
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
	vector<int> ar={9,5,3};
	//* non optimized way
//	int min_XOR=0;
//	int size=sizeof(a)/sizeof(a[0]);
//	for(int i=0;i<size;i++)
//	{
//		for(int j=i+1;j<size;j++){
//			min_XOR=(min_XOR,a[i]^a[j]);
//		}
//	}

// opimized way
    int i,p,mi=INT_MAX;
	//sort(ar.begin(),ar.end());
	for(i=1;i<ar.size();i++){
		p=ar[i]^ar[i-1];
		{
		  if(mi>p){
		  	mi=p;
		  }		
		}
	} 
	cout<<"minimum XOR value is : "<<mi<<endl;
}
