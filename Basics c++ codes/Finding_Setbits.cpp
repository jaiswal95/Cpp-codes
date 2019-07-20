//Author: Pankaj jaiswal
//Date: 20th july 2019
/*
Finding Setbits(No. of 1's in binary representation)
*/
#include<iostream>
using namespace std;
	int main(){
		int n;
		cin>>n;
		int ans=0;
		for(;n>0;n=n>>1)
		{
		ans=ans+(n&1);
		}
		cout<<ans<<endl;
		return 0;
	}