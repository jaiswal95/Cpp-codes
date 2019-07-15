// Author- Pankaj jaiswal
// Date- 15-07-2019
/*
1 1 1 1 1
0 1 1 1 1
0 0 1 1 1
0 0 0 1 1
0 0 0 0 1
*/

#include<iostream>
using namespace std;
		int main(){
			int n;
			cin>>n;
				for(int i=1;i<=n;i++){
						for(int j=1;j<=n;j++){
						 		if(j>i||i==j)
						 		   cout<<"1"<<"\t";
						 		else
						 			cout<<"0"<<"\t";
						}
					cout<<endl;	
				}
				return 0;
		}
