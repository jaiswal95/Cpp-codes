//Author- Pankaj jaiswal
//Date- 17-07-2019
/*
0
1 1 
2 3 5 
8 13 21 34 
55 89 144 233 377 
*/

#include <iostream>
using namespace std;
int main(){
	 int n;
	 cin>>n;
	 int a=0;
	 int b=1;

	 for (int i=1;i<=n;i++)
	 {
	 	for (int j=1;j<=i;j++){
	 		if(i==1)
	 			cout<<a;
	 		else{
	 			cout<<b<<" ";
				int s=a+b;
				a=b;	 		
	 			b=s;
	 		}
	 	}
	 	cout<<endl;
	 }
	 return 0;
}