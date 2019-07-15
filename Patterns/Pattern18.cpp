//Author- Pankaj jaiswal
//Date- 15-07-2019
/*
        1
      2 1
    3 2 1
  4 3 2 1
5 4 3 2 1
*/

#include<iostream>
using namespace std;
        int main(){
           int i,j,n,s;
           cin>>n;
           s=n;
          for(int i=1;i<=n;i++){
          			s=s-i;
          		for(int j=i;j>=1;j--){
          				while(s>0){
          					cout<<"\t";
                                                s--;
          				}
          			cout<<j<<"\t";
          		}
          	cout<<endl;
          	s=n;
          } 
          return 0;
        }    
