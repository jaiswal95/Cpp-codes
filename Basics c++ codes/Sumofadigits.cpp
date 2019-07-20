//Author: Pankaj jaiswal
//Date: 20th july 2019
/*
Sum of a digits of a numbers
*/
#include<iostream>
using namespace std;
int main(){
	int n;
	cin>>n;
	int sum=0;
		while(n>0){
			int last_digit=n%10;
			sum=sum+last_digit;
			n=n/10;
		}
		cout<<"Sum is"<<sum<<endl;
		return 0;
}