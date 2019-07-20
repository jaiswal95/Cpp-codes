//Author- Pankaj jaiswal
//Date- 17-07-2019
/*      
                                1
                        1       2       3
                1       2       3       4       5
        1       2       3       4       5       6       7
1       2       3       4       5       6       7       8       9
*/

#include<iostream>
using namespace std;
		int main(){
			int n;
			cin>>n;
			int i=1;
		  while(i<=n){

		  //Spaces
		  	int space=1;
		  	while(space<=n-i){
		  		cout<<"\t";
		  		space= space+1;
		  	}
		  //Numbers 
		  	int no=1;
		  	while(no<=(2*i)-1){
		  		cout<<no<<"\t";
		  		no=no+1;
		  	}
		  	cout<<endl;	
		  	 i=i+1;
		  }
		   return 0;
		}