//Author- Pankaj jaiswal
//Date- 16-07-2019
/*
5
4 4
3 3 3
2 2 2 2
1 1 1 1 1
*/
#include<iostream>
using namespace std;
		int main(){
			int i,j,n;
			cin>>n;
		  for(i=n;i>=1;i--){
		  		for(j=i;j<=n;j++){
		  			cout<<i<<" ";
		  		}
		  		cout<<endl;
		  }
		  return 0;
		}