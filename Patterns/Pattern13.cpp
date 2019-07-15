//Author- Pankaj jaiswal
//Date- 15-07-2019
/*
1 4 16 36 64
1 9 25 49
1 4 16
1 9
1 
*/

#include<iostream>
using namespace std;
	int main(){
			int n;
			cin>>n;
        for(int i=n;i>=1;i--){
        		cout<<"1"<<" ";
        			if(i%2==0){
        				for(int j=3;j<i*2;j=j+2){
        					cout<<j*j<<" ";
        				}
        			 }
        			else{
        			    for(int j=2;j<i*2;j=j+2){
        			    	cout<<j*j<<" ";
        			    }
                     }
           cout<<endl;
        }
        return 0;
	}