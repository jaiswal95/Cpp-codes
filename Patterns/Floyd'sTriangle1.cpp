//Author-Pankaj jaiswal
//Date-14-07-2019
/*
5
6 7
8 9 10
1 2 3 4
*/
#include<iostream>
using namespace std;
int main(){
	int n,k=5;
	cin>>n;
		for(int i=1;i<=n;i++){
				for(int j=1;j<=i;j++){
					cout<<k<<"\t";
					if(k==10){
						k=0;
					}
					k++;
				}
				cout<<"\n";
		}
		return 0;
}