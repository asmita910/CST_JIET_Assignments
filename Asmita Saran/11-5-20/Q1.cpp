//Q.1  
#include<iostream>
using namespace std;
int main()
{
  	 int ar[]={1,2,1,4,5,4,2};
     int len=sizeof(ar) / sizeof(ar[0]);
     int ans=ar[0];
      for(int i=1;i<len;i++){
       ans^=ar[i];  	
	  }
      cout<<"the answer is->"<<ans<<endl;
}
