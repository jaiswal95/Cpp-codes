//Author- Pankaj jaiswal
//Date- 15-07-2019
/*
6 5 4 3 2 1
5 4 3 2 1
4 3 2 1
3 2 1
2 1
1
*/

#include<iostream>
using namespace std;
	int main(){
			int rows;
			cin>>rows;
        for(int i=0;i<rows;i++){
        		int k= rows-i;
            for(int j=0;j<rows-i;j++){
                cout<<k<<"\t";
                k--;
            }
            cout<<endl;
        }
        return 0;
	}