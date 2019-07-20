//Author: Pankaj jaiswal
//Date: 20th july 2019
/*
A person wants to go from origin to a particular location,he can move in only 4 directions(i.e.,East,West,South,North) but his friend gave him a long route,help a person to find minimum moves so that he can reach to the destination.

				Input-NESNWES
				Output-E
You need to print the lexicographically stored string.Assume the string will have only 'E','W','N' and 'S'.
*/
#include<iostream>
using namespace std;
		int main(){
			char ch;
			ch=cin.get();
			int x=0,y=0;
				while(ch!='\n'){
					switch(ch){
						case'N':y++;break;
						case'S':y--;break;
						case'E':x++;break;
						case'W':x--;break;
					}
					ch=cin.get();
				}
				cout<<"Net Displacement is "<<x<<" and "<<y<<endl;
				if(x>=0&&y>=0){
				      //East part
                        for(int i=0;i<x;i++){
                        	cout<<'E';
                        }
                      //North part
                        for(int i=0;i<y;i++){
                        	cout<<'N';
                        } 
                   cout<<endl; 
				}
		}				
