//Author: Pankaj jaiswal
//Date: 22th july 2019
/*
Enter a number : 5
The series with sum
1+(1+2)+(1+2+3)+(1+2+3+4)+(1+2+3+4+5)=35
*/
#include<iostream>
using namespace std;
int main()
{
int i,j,n;
long sum=0;
cout<<"Enter a number : ";
cin>>n;
cout<<"The series with sum\n";
for(i=1; i<=n; i++)
{
(i!=1)?cout<<"(":cout<<"";
for(j=1; j<=i; j++)
{
cout<<j;
(j!=i)?cout<<"+":cout<<"";
sum = sum + j;
}
(i!=1)?cout<<")+":cout<<"+";
}
cout<<"\b="<<sum;
}