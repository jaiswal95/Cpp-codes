//Author- Pankaj jaiswal
//Date- 16-07-2019
/*   
     *
   * * *
 * * * * *
*/
#include<iostream>
using namespace std;
	int main(){
			int i,j,a=1,n,s;
			cin>>n;
		for(i=1;i<=n;i++){
				s=n-i;
			 while(s!=0){
			 	cout<<"  ";
			 		s--;
			 }
			for(j=1;j<i*2;j++){
				cout<<"* ";
			} 
			 cout<<endl;
		}
		return 0;
	}