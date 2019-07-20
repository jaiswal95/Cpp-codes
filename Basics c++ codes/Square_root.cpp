//Author: Pankaj jaiswal
//Date: 20th july 2019
/*
Square root upto p places
*/

#include<iostream>
using namespace std;
	int main(){
		int n,p;
		cin>>n>>p;
			float ans=0;
			float inc=1;
			int times=0; //(p+1)times for p places(after decimal)
		while(times<=p){
			while(ans*ans<=n){
			 ans=ans+inc;
			}
			ans=ans-inc;
			inc=inc/10;
			times=times+1;
		}
		cout<<ans<<endl;
		return 0;
	}