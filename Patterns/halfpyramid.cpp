//Author pankaj jaiswal
//date :- 14-07-2019
/* 
*
* *
* * * 
* * * *
* * * * *
*/
#include<iostream>
using namespace std;
int main(){
	int n;
	cin>>n;
	for(int i=1;i<=n;i++){
		for(int j=1;j<=i;j++){
			cout<<"*"<<"\t";
		}
		cout<<endl;
	}
	return 0;
}