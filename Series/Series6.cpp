//Author: Pankaj jaiswal
//Date: 23th july 2019
/*
Enter n: 5
1/2-3/4+5/6-7/8+9/10
The series till 5 is : 0.608333
*/
#include<iostream>
using namespace std;
int main(){
int n,i,num=1,den=2;
float sum=0.0,psum=0.0,nsum=0.0;
cout<<"Enter n: ";
cin>>n;
for(i=1 ; i<=n ; i++,num=num+2,den=den+2)
{
if(den%4==0){
	cout<<num<<"/"<<den;
	if(i!=n)
	cout<<"+";
	nsum=nsum+(float)num/den;
}
else
{
	cout<<num<<"/"<<den;
	if(i!=n)
	cout<<"-";
	psum=psum+(float)num/den;
}

}
sum=psum-nsum;
cout<<"\nThe series till "<<n<<" is : "<<sum;
return 0;
}

