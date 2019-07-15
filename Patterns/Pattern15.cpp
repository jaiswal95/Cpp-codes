//Author- Pankaj jaiswal
//Date- 15-07-2019
/*
# # # # # $ # # # # #
# # # # $ # $ # # # #
# # # $ # # # $ # # #
# # $ # # # # # $ # #
# $ # # # # # # # $ #
*/

#include<iostream>
using namespace std;
		int main(){
			int n,space,r;
			cin>>n;
			space=1;
			r=n;
      for(int i=2;i<=n+1;i++){
      		for(int j=1;j<=r;j++){
      			cout<<"#";
      		}
      		   cout<<"$";
            for(int j=1;j<=space-2;j++){
                cout<<"#";
            }
              if(space>1){
                    cout<<"$";
                }
                space= 2*i-1;
            for(int j=1;j<=r;j++){
            	cout<<"#";
            }
            r--;
            cout<<endl;
      }
      return 0;
	}