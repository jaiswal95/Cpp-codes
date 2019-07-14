// Author - Pankaj jaiswal
// Date - 14-07-2019
/* 
      3
      3
1  2  3  4  5
      3
      3
 */

 # include<iostream>
 using namespace std;
 int main(){
 			int n;
 			cin>>n;
          for(int i=1;i<=n;i++){
          		for(int j=1;j<=n;j++){
          		        if(j==3)
          		        	cout<<j<<"\t";
          		        else if(i==3)
          		        	cout<<j<<"\t";
          		        else
          		        	cout<<"\t";		
          		                 }
          		                cout<<endl;
          }
          return 0;
 }