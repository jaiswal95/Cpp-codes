//Author- Pankaj jaiswal
//Date- 16-07-2019
/*
* * * * *
* * * *
* * *
* *
*
*/

#include<iostream>
using namespace std;
		int main(){
			int i,j,n;
			cin>>n;
		  for(i=n;i>=1;i--){
		  	for(j=1;j<=i*2;j=j+2){
		  		cout<<"*"<<" ";
		  	}
		  	cout<<endl;
		  }	
		  return 0;
		}