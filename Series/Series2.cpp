#include<iostream>
using namespace std;
int main()
{
int i,j,n;
float sum=1;
cout<<"Enter value of n : ";
cin>>n;
cout<<"The series is : 1";
for(i=1; i<n; i++)
{
cout<<"+1"<<"/"<<i*10+1;
sum += 1.0/(i*10+1);
}
cout<<"\nThe sum is : "<<sum;
}