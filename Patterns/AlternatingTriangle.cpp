//Author- Pankaj jaiswal
//Date- 15-07-2019
/*
1
0 1
1 0 1
0 1 0 1
1 0 1 0 1
*/

#include<iostream>
using namespace std;
	int main(){
		int n;
		cin>>n;
			for(int i=1;i<=n;i++){
					int val=(i&1)?1:0;
   				for(int j=1;j<=i;j++){
   						cout<<val<<" ";
   						val=1-val;
   				}
   				cout<<endl;
			}
			return 0;
	}