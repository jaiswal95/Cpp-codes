//Author name-Pankaj jaiswal
//Date-14-07-2019
/*
1  2  3  4  5
6  7  8  9
10 11 12
13 14
15
*/

#include<iostream>
using namespace std;
		int main(){
		int i,j,n,k=1;
		cin>>n;
		for(i=1;i<=n;i++){
			for(j=1;j<=n-i;j++){
			cout<<k<<"\t";
			k++;
			}
			cout<<"\n";
		}
		return 0;
		}