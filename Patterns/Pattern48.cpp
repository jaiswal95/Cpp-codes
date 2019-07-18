//Author- Pankaj jaiswal
//Date- 18-07-2019
/*
123456789
 2345678
  34567
   456
    5
*/
#include<iostream>
using namespace std;
int main()
{
int i,j,a=1,b,n,s;
cin>>n;
for(i=n; i>=1; i--){
     s=n-i;
    while(s!=0){
     cout<<" ";
     s--;
     }
   for(j=1; j<i*2; j++){
          if(j<i){
               cout<<a;
               a++;
              }
          else if(j==i){
                  cout<<a;
                   b=a;
                    }
          else{
              ++b;
              cout<<b;
              a--;
              }
           }
          a++;
          cout<<endl;
      }
      return 0;
}