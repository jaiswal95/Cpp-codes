//Author- Pankaj jaiswal
//Date- 16-07-2019
/*
9 7 5 3 1
9 7 5 3
9 7 5
9 7
9
*/

#include<iostream>
using namespace std;
	int main(){
		int i,j,a,n;
		cin>>n;
	  for(i=n;i>=1;i--){
	  		a=2*n;
	  	 for(j=i*2;j>=1;j--){
	  	 	if(a%2!=0){
	  	 		cout<<a<<" ";
	  	 	}
	  	 	a--;
	  	 }
	  	 cout<<endl;
	  }
	  return 0;
	}