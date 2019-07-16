//Author- Pankaj jaiswal
//Date- 16-07-2019
/*
12345
 2345
  345
   45
    5
    */

#include <iostream>
using namespace std;
		int main(){
				int i,j,n,s;
				cin>>n;
            for(i=1;i<=n;i++){
            		s=i-1;
            	for(j=i;j<=n;j++){
            		while(s>0){
            			cout<<" ";
            				s--;
            		}
            		cout<<j;
            	}
            	cout<<endl;
            }
            return 0;
		}