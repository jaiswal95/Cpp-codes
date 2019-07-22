//Author: Pankaj jaiswal
//Date: 22th july 2019
/*
Enter a number : 5
The series with sum
1!+2!+3!+4!+5!=153
*/
#include<iostream>
using namespace std;
long fact(int);
int main()
{
int i,n;
long sum=0;
cout<<"Enter a number : ";
cin>>n;
cout<<"The series with sum\n";
for(i=1; i<=n; i++)
{
cout<<i<<"!+";
sum = sum + fact(i);
}
cout<<"\b="<<sum;
}
long fact(int n)
{
long f=1;
int i;
for(i=1; i<=n; i++)
f=f*i;
return f;
}