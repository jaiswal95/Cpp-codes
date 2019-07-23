//Author: Pankaj jaiswal
//Date: 23th july 2019
#include<iostream>
using namespace std;

int main()
{
  int n;
    cout<<"Enter number:";
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
  int t,i,j;
  for(i = 0;i<n;i++){
    for(j = i+1;j<n;j++){
      if(a[i]>a[j]){
        t = a[i];
        a[i] = a[j];
        a[j] = t;
      }
    }
  }
  for(i = 0;i<n;i++){
    cout << a[i] << "\n";
  }
  return 0;
}		