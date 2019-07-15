//Author- Pankaj jaiswal
//Date- 15-07-2019

/*
1 3 5 7 9
1 3 5 7
1 3 5
1 3 
1
1 3
1 3 5
1 3 5 7
1 3 5 7 9
*/

#include<iostream>
using namespace std;
	int main(){
			int n;
			cin>>n;
		for(int i=n;i>=1;i--){
			for(int j=1;j<=i*2;j=j+2){
			    cout<<j<<" ";
			}
			cout<<endl;
		}
		for(int i=2;i<=n;i++){
            for(int j=1;j<=i*2;j=j+2){
                cout<<j<<" ";
            }
            cout<<endl;
		}
		return 0;
	}