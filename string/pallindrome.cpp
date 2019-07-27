//Author : Pankaj jaiswal
//Date : 27th july 2019
//Inputs 1441
//Outputs boolean value 0 and 1
#include <iostream>
using namespace std;
bool pallindrom(string s){
	int i=0;
	int j=s.length()-1;
	while(i<j){
		if(s[i]!=s[j])
		return false;
		i++;
		j--;
		
	}
	return true;
}
int main(){
	string s;
	cin>>s;
	cout<<pallindrom(s);
}