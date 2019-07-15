//Author- Pankaj jaiswal
//Date- 15-07-2019

/*
1 
1 1
1 1 2
1 1 2 2
1 1 2 2 3
*/

#include<iostream>
using namespace std;
		int main(){
		int k,n;
		cin>>n;
			for(int i=1;i<=n;i++){
							k=1;
					for(int j=1;j<=i;j++){
							cout<<k<<"\t";
								if(j%2==0){
									k++;
								}
                            }
                            cout<<"\n";
			}
			return 0;
		}
