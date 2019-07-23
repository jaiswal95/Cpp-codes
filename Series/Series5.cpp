//Author: Pankaj jaiswal
//Date: 22th july 2019
/*
Enter n : 5
1/2+3/4+5/6+7/8+9/10
The series till 5 is : 3.85833
*/
#include<iostream>
using namespace std;
int main()
{
int n,i;
float sum=0.0,num=1.0,den=2.0;
cout<<"Enter n : ";
cin>>n;
for(i=1 ; i<=n ; i++,num=num+2.0,den=den+2.0)
{

cout<<num<<"/"<<den;
if(i!=n)
cout<<"+";
sum=sum+num/den;
}
cout<<"\nThe series till "<<n<<" is : "<< sum;
return 0;
}