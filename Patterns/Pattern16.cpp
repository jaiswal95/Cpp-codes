//Author- Pankaj jaiswal
//Date- 15-07-2019
/*
1
2 3 2
3 4 5 4 3
4 5 6 7 6 5 4
5 6 7 8 9 8 7 6 5
*/

#include<iostream>
using namespace std;
		int main(){
		  		int i,j,a=1,n;
		  		cin>>n;
		  	cout<<a<<endl;
		  for(i=1;i<=n;i++){
		  		for(j=0;j<=i*2;j++){
		  			if(j<=i){
		  					a++;
		  					cout<<a<<" ";
		  					}
		  		    else{
		  		        a--;
		  		        cout<<a<<" ";
		  		    }
		  		}
		  		cout<<endl;
		  }
		  return 0;
		}