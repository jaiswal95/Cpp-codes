//Author- Pankaj jaiswal
//Date- 15-07-2019
/*
1 
1 2 1
1 2 3 2 1
1 2 3 4 3 2 1
*/

#include<iostream>
using namespace std;
		int main(){
			int n,a=1;
			cin>>n;
			    cout<<a<<endl;
				for(int i=1;i<=n;i++){
                      	int a=1;
                     for(int j=0;j<=i*2;j++){
                         if(j<i){
                         	cout<<a<<" ";
                         	a++;
                         }
                         else{
                          	cout<<a<<" ";
                          	a--;
                         }
                     }
                     cout<<endl;
				}
				return 0;
		}