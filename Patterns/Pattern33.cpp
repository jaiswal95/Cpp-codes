//Author- Pankaj jaiswal
//Date- 17-07-2019
/*
    1
   2 2
  3   3
 4     4
555555555
*/

#include<iostream>
using namespace std;
		int main(){
			int i,j,k,n;
			cin>>n;
		  for(i=1;i<=n;i++){
		  		for(j=1;j<=n-i;j++){
		  			cout<<" ";
		  		}
		  for(k=1;k<=(2*i)-1;k++){
             if(i<n){
             	if(k==1||k==(2*i)-1)
             		cout<<i;
             	else
             		cout<<" ";
             }
             else if(i==n)
             		cout<<i;
		   }
		   cout<<endl;
		  }
		  return 0;
		}