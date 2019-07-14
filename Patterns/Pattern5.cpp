//Author- Pankaj jaiswal
//Date - 14-07-2019
/*
1 2 3 4
5 6 7 8
9 0 1 2
3 4 5 6
*/
#include<iostream>
using namespace std;
int main(){
	int i,j,k=1,n;
	cin>>n;
	for(i=0;i<=n;i++){
			for(j=1;j<=n;j++){
			cout<<k<<"\t";
			k++;
			if(k==10){
			k=0;
			}
			}
			cout<<endl;
			}
		return 0;
}