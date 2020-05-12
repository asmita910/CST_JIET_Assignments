//Q4. Count of Paths in a grid

#include<iostream>
#include<stdio.h>
using namespace std;
#include<bits/stdc++.h>
int main()
{
	 int A;
	 cout<<"enter value of A"<<endl;
	 cin>>A;
	 vector<vector<int> > ar(A,vector<int>(A,0));
	 int i,j;
	 for(int i=0;i<A;i++){
	 	ar[i][0]=1;
	 }
	 for(i=1;i<A;i++){
	 	for(j=1;j<A;j++){
	 		if(i>=j){
			 if(i==j){
			 	ar[i][j]=ar[i][j-1];
			 }
			 else{
			 	ar[i][j]=ar[i][j-1]+ar[i-1][j];
			 }
		 }
		 }
	 }
	 cout<<"number of ways are : "<<ar[A-1][A-1]<<endl;
	 
}
