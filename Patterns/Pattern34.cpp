//Author- Pankaj jaiswal
//Date- 17-07-2019
/*
* * * * * 
* *   * * 
*   *   * 
* *   * * 
* * * * * 
*/
#include <iostream>
using namespace std;
int main(){
	int n;
	cin>>n;
	for(int i=1;i<=n;i++){
		for(int j=1;j<=n;j++){
			if(i==1||i==n||j==1||j==n||i==j||j==n-i+1){
				cout<<"*"<<" ";
			}
			else{
				cout<<"  ";
			}
		}
		cout<<endl;
	}
}