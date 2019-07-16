//Author- Pankaj jaiswal
//Date- 16-06-2019
/*
1 1 1 1 1
2 2 2 2
3 3 3
4 4
5
*/
#include<iostream>
using namespace std;
	int main(){
		 int i,j,n,a=1;
		 cin>>n;
	   for(i=n;i>=1;i--){
	   		for(j=1;j<=i;j++){
	   			 cout<<a<<" ";
	   		}
	   		a++;
	   		cout<<endl;
	   }
	   return 0;
	}