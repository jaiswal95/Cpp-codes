//Author- Pankaj jaiswal
//Date- 18-07-2019
/*
 * * * * *
  *       *
   *       *
    *       *
     * * * * *
 */
#include<iostream>
using namespace std;
int main(){
	int n;
	cin>>n;
	for(int i=1;i<=n;i++){
	   for(int j=1;j<=i;j++){
	        cout<<" ";
	        }

	   for(int k=1;k<=n;k++){
	        if(i==n||i==1||k==1||k==n){
	               cout<<"* ";
	              }
	        else{
	             cout<<"  ";
	            }
	}
	cout<<endl;
	}
}