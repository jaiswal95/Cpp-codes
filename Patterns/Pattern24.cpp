//Author- Pankaj jaiswal
//Date- 16-07-2019
/*
*
* *
*
* * *
*
* * * *
*/

#include<iostream>
using namespace std;
	int main(){
		int i,j,rows,n=2;
		cin>>rows;
		for(i=1;i<=rows;i++){
				if(i%2!=0){
					cout<<"* ";
				}
				else{
					for(j=1;j<=n;j++){
						cout<<"* ";
					}
					n++;
				}
				cout<<endl;
		}
		return 0;
	}