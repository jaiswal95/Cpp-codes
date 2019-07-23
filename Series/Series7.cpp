//Author: Pankaj jaiswal
//Date: 23th july 2019
/*

*/
#include<bits/stdc++.h>
using namespace std;

long fact(int n){
long f=1;
while(n>0){
f=f*n;
n--;
}
return f;
}

int main()
{
int i,j,n;
double sum=0.0;
cout<<"Enter a number: ";
cin>>n;
cout<<"The series with sum is:\n";
for(i=1; i<=n; i++)
{
cout<<i<<"^"<<i<<"/"<<i<<"!";
(i==n)?cout<<" = ":cout<<" + ";

sum += pow(i,i)/(double)fact(i);
}
cout<<sum;
}

