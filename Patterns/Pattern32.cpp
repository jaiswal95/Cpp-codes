//Author- Pankaj jaiswal
//Date- 17-07-2019
/*
* * * * * *
*         *
*         *
*         *
* * * * * *
*/

#include<iostream>
using namespace std;
		int main(){
			int i,j,m;
			cin>>m;
		  for(i=1;i<=m;i++){
		  		for(j=1;j<=m+1;j++){
		  			if((i==1)||(i==m))
		  				cout<<"* ";
		  			else{
		  				if((j==1)||(j==m+1))
		  					cout<<"* ";
		  				else
		  					cout<<"  ";
		  			}
		  		}
		  		cout<<endl;
		  }
		  return 0;
		}