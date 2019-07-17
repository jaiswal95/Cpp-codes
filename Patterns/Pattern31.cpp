//Author- Pankaj jaiswal
//Date- 17-07-2019

#include<iostream>
using namespace std;
		int main(){
			int i,j,k,n;
			cin>>n;
		  for(i=1;i<=n;i++){
		  	  for(j=1;j<=n-i;j++){
		  	  		cout<<" ";
		  	  }
		  	  for(k=1;k<=(2*i)-1;k++){
		  	  		if(i<n){
		  	  			if(k==1||k==(2*i)-1)
		  	  				cout<<"*";
		  	  			else
		  	  				cout<<" ";
		  	  		}
		  	  		else if(i==n){
		  	  			if(k%2!=0)
		  	  				cout<<"*";
		  	  			else
		  	  				cout<<" ";
		  	  		}
		  	  }
		  	  cout<<endl;
		  }
		  return 0;
		}