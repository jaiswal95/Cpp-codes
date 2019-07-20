//Author: Pankaj jaiswal
//Date: 20th july 2019
/* 
Write a logic,which compute the sum/average of N numbers.
*/
#include<bits/stdc++.h>
using namespace std;
int main(){
		int n;
		cin>>n;
		int no,i,sum=0;
		i=1;
			while(i<=n){
					cin>>no;
					cout<<no<<endl;
					sum=sum+no;
					i=i+1;
			}
			cout<<"Sum="<<sum<<endl;
			float avg;
			avg= sum/n;
			cout<<"Average="<<avg<<endl;
			return 0;
}