//Author: Pankaj jaiswal
//Date: 22th july 2019
// 1*2+2*3+3*4+…+(n-1)*n
#include<iostream>
using namespace std;
            int main(){
                     int i,j,n;
                     cin>>n;
              for(i=1,j=2; i<=n; i++,j++){
                    (i!=n) ? cout<<i<<"*"<<j<<"+" : cout<<i<<"*"<<j;
                    }
return 0;
}