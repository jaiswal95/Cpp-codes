//Author name-Pankaj jaiswal
//Date-14-07-2019
/*
1 2 3 4 5 6 7 8 9
    2 3 4 5 6 7 8
        3 4 5 6 7
            4 5 6
                5
*/

#include<iostream>
#include<iomanip>
using namespace std;
int main(){
	int k=1,a=1,n=1;
	for(int i=5;i>=1;i--){
		for(int j=1;j<=2*i-1;j++){
			cout<<k;
			k++;
		}
		cout<<endl<<setw(n+=2);
		a++;
		k=a;
	}
	return 0;
}               