// Author- Pankaj jaiswal
// Date- 14-07-2019
/* 
C
C O
C O M
C O M P
C O M P A
C O M P A R
C O M P A R E
*/

#include<bits/stdc++.h>
using  namespace std;
int main(){
	char str[80];
	cin>>str;
	int l;
	l=strlen(str);
	for(int i=0;i<l;i++){
			for(int j=0;j<=i;j++){
					cout<<str[j]<<" ";
			}
			cout<<endl;
	}
	return 0;
}