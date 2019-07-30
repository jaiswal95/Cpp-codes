//Author : Pankaj jaiswal
//Date : 30 June 2019
#include<iostream>
using namespace std;
int main(){
	char ch;
	cin>>ch;
	if(ch>='A'&&ch<='B')
	{
		cout<<"Upper";
	}
	else if(ch>='a'&&ch<='b'){
		cout<<"Lower";
	}
	else{
		cout<<"Invalid";
	}
}
