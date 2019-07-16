//Author- Pankaj jaiswal
//Date- 16-06-2019
/*
1
1*2
1***3
1*****4
1*******5
*/

#include<iostream>
using namespace std;
		int main(){
		 	int i,j,n,s=1,a=2;
		 	cin>>n;
		 	cout<<"1"<<endl;
		 	 	for(i=2;i<=n;i++){
		 	 		cout<<"1";
		 	 	  for(j=1;j<=s;j++){
                      cout<<"*";
                      }
                      	s+=2;
                      cout<<a;
                      	a++;
		 	 	  	  cout<<endl;
		 	 	}
		 	 	return 0;
		}