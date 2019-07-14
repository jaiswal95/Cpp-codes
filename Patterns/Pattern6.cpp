// Author-Pankaj jaiswal
// Date-14-07-2019
/*
A C E G
A C E
A C
A
*/

#include<iostream>
using namespace std;
int main(){
	int n;
	cin>>n;
	char k='A',x;
		for(int i=n;i>0;i--){
				x=k;
			for(int j=1;j<=i;j++,k+=2){
				cout<<k<<" ";
			   }
			 k=x;
			 cout<<endl;
		}
		return 0;
}