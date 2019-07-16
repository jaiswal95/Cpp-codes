//Author- Pankaj jaiswal
//Date- 16-07-2019
/*
5
4 5
3 4 5
2 3 4 5
1 2 3 4 5
*/

#include<iostream>
using namespace std;
		int main(){
			int i,j,n;
			cin>>n;
         for(i=n;i>=1;i--){
         	for(j=i;j<=n;j++){
         		cout<<j<<" ";
         	}
         	cout<<endl;
         }
         return 0;
	}